#!/bin/bash
echo "Enter number of rows."
read row
i=1
while [ $i -le $row ]
do
j=1
while [ $j -le $row ]
do
if [ $i -le $j ]
then
echo -n "*"
else
echo -n " "
fi
j=$(($j+1))
done
k=$(($row-i))
while [ $k -gt 0 ]
do
echo -n "*"
k=$(($k-1))
done
echo ""
i=$(($i+1))
done