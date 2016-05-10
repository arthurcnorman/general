#! /bin/bash

./save.sh
case `uname -a`
in
*CYGWIN*)
# Here I am on a windows machine so I will fetch from gauguin
  scp -r acn1@gauguin.trin.cam.ac.uk:\$O/packages/lalr/\* .
  ;;
*)
# Here I am NOT on Windows so I will fetch from my home machine
  scp -r acn1@codemist.dynu.com:\$O/packages/lalr/\* .
  ;;
esac
