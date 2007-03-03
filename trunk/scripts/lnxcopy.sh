#!/bin/sh
if [ ! "$1" ]
then
        echo 'Use: lnxcopy.sh <function>'
        exit 1
fi

for i in "bsd BSD" "solaris SOL"
do
        export a="`echo $i | sed 's| .*||'`"
        export b="`echo $i | sed 's|.* ||'`"
        cat linux/LINUX_$1.c | sed 's|LINUX|'$b'|g' > $a/${b}_$1.c
done
