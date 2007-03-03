#!/bin/sh
if [ ! "$1" ]
then
        echo 'Use: stubcopy.sh <function>'
        exit 1
fi

for i in "linux LINUX" "bsd BSD" "solaris SOL"
do
        export a="`echo $i | sed 's| .*||'`"
        export b="`echo $i | sed 's|.* ||'`"
        cat stubkern/STUBKERN_$1.c | sed 's|STUBKERN|'$b'|g' > $a/${b}_$1.c
done
