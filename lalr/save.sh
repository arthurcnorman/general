#! /bin/bash
#
# Save backups of all important files here to date-stamped directory

case `uname -a`
in
*CYGWIN*)
  p="W"
  ;;
*)
  p="L"
  ;;
esac
d=$p-`date +%y%m%d-%H%M`
mkdir -p backup/$d
cp *.red *.tst *.sh *.log *.rlg *.tex backup/$d
ls backup
ls backup/$d

# done
