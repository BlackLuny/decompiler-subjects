#!/bin/sh

set -e

ulimit -c 0
ulimit -t 600
ulimit -v 4000000

if test -z "$SNOWMANDIR"; then
    echo "\$SNOWMANDIR not set. The executable \$SNOWMANDIR/nocode will be used."
    exit 1
fi

root=$(pwd)

find $root -name subject.exe | grep -v ppc_ | grep -v m68k_ | grep -v sparc_ | grep -v _mz | grep -v ia32_com | grep -v hppa_sharedexe | sort | while read line
do
  dir=$(dirname $line)
  if test -f $dir/by_snowman.c -o -f $dir/by_snowman.failed; then
      echo "skipping $line" >/dev/null
  else
      echo -n "decompiling $line"
      rm -f $dir/by_snowman.c $dir/by_snoman.failed
      if $SNOWMANDIR/nocode  --print-cxx=$dir/by_snowman.c -- "$line" >/tmp/tmp.out 2>&1 ; then
	  echo "  ok"
      else
	  echo "  failed"
	  touch $dir/by_snowman.failed
      fi
      sed </tmp/tmp.out "s,$root/,,g" >$dir/by_snowman.out
  fi
done
rm -f /tmp/tmp.out