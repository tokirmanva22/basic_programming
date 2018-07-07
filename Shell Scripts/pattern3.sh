#!/bin/bash
echo "Enter number of rows."
read row

i=$row
while [ $i -gt 0 ]
do
j=1
while [ $j -le $row ]
do
if [ $i -eq $j ]
then
echo -n "*"
else
echo -n " "
fi
j=$(($j+1))
done
k=1
while [ $k -le $(($row-i)) ]
do
if [ $k -eq $(($row-i)) ]
then
echo -n "*"
else
echo -n " "
fi
k=$(($k+1))
done
echo ""
i=$(($i-1))
done

i=1
while [ $i -le $row ]
do
j=1
while [ $j -le $row ]
do
if [ $i -eq $j ]
then
echo -n "*"
else
echo -n " "
fi
j=$(($j+1))
done
k=1
while [ $k -le $(($row-i)) ]
do
if [ $k -eq $(($row-i)) ]
then
echo -n "*"
else
echo -n " "
fi
k=$(($k+1))
done
echo ""
i=$(($i+1))
done