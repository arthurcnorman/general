#! /bin/sh

# Test all package

# Usage:
#   scripts/testall.sh [--noregressions]
#                      [--install] [--keep]
#                      [--csl] [--jscsl]
#                      [--uncached]
#
# If present the argument "--noregressions" must come first and it
# causes the script to avoid running the regression tests. This may be useful
# when just checking performance of the core of Reduce.
#
# Other arguments can be given in any order. "--install" will lead to
# a fresh set of reference logs being places in the source tree based on
# testing the CSL version. "--keep" preserves some temporary files created
# during testing and may be useful when debugging this script. "--uncached"
# runs the tests with symbolic(!*uncached := t);
# --csl, --psl, --jlisp, --cslbool and --jlispboot select the variants
# of Reduce to test, and any number of those options can be given. If none
# are then "--csl --psl" is assumed.

# Part of the intent here is that if any further variants of Reduce get created
# it should be reasonably straightforward to extent the code here to support
# testing them. Changes will be needed in "test1.sh" too.

# I want this script to be one I can launch from anywhere, so
# to access files etc I need to know where it lives. The logs directories
# csl-times, psl-times etc are created as sub-directories of the directory
# current when this script was invoked.

here="$0";while test -L "$here";do here=`ls -ld "$here" | sed 's/.*-> //'`;done
here=`dirname "$here"`
here=`cd "$here"; pwd -P`
here=`dirname "$here"`

# Well I want to tidy up files relating to platforms being tested so I
# do need to scan the argument list and collect them

noregressions="no"
if test "x$1" = "x--noregressions"
then
  noregressions="yes"
  shift
fi

platform=""
plist=""
some="no"
base=""
extras=""
for a in $*
do
  case $a
  in
  --install | --keep | --uncached)
    extras="$extras $a"
    ;;
  --csl | --jscsl)
    sys=`echo $a | sed 's/--//'`
    plist="$plist $a"
    if test "$some" = "no"
    then
      base="$sys"
      platform="$sys"
    else
      platform="$platform $sys"
    fi
    some="yes"
    ;;
  *)
    printf "\"$a\" is not a valid argument to this script.\n"
    printf "Valid options are: --csl --jscsl\n"
    printf "    --noregressions --install --keep --uncached\n"
    printf "Stopping.\n"
    exit 1
    ;;
  esac
done

# Apply default if no platforms specified
if test "$some" = "no"
then
  platform=" csl jscsl"
  base="csl"
fi

#
# Remove old log files
#
for sys in $platform
do
  rm -f $sys-times/*.rlg* $sys-times/*.rlg* $base-$sys-times-comparison/*.rlg.diff
done

packages=`sed -e '/^\%/d' $here/../packages/package.map | \
          grep ' test ' | \
          sed -e 's/(//; s/".*//'`

for p in $packages
do
  echo "Test package $p"
  ./test1.sh $plist $extras $p
done

if test "$noregressions" = "no"
then
  for p1 in $here/../packages/regressions/*.tst
  do
    p=${p1%.tst}
    p=${p##*/}
    echo "Test regression case $p"
    ./test1.sh $plist $extras regressions $p
  done
fi

printf "\nSummary of test runs for $platform\n\n"

for sys in $platform
do
  d=`cd $sys-times; echo *.rlg.diff`
  if test "$d" != "*.rlg.diff"
  then
    printf "\nDifferences for $sys: `echo $d | sed -e 's/\.rlg\.diff//g'`\n"
  fi
done

for sys in $platform
do
  if test "$sys" != "$base"
  then
    d=`cd $base-$sys-times-comparison; echo *.rlg.diff`
    if test "$d" != "*.rlg.diff"
    then
      printf "\nDifferences between $base and $sys: `echo $d | sed -e 's/\.rlg\.diff//g'`\n"
    fi
  fi
done

printf "\n"

reporttime() {
  name=$1
  dir=$2
  total="0"
  for x in $dir/*.time
  do
    val=`grep ^Time $x | sed -e 's/.*(counter 1): //; s/ms.*//'`
# The apparently spurious "0" here is in case $val ends up as empty.
    total=`printf "1k 0 $val $total + pq" | dc`
  done
  total=`printf "2k $total 1000 / pq" | dc`
  printf "$name total = $total (seconds)\n"
}

if test "x`which dc`" != "x"
then
  for sys in $platform
  do
    case $sys in
    csl)
      reporttime "CSL" "csl-times"
      ;;
    jscsl)
      reporttime "JSCSL" "jscsl-times"
      ;;
    esac
  done
fi

# end of script

