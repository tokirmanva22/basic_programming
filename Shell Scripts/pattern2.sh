#!/bin/bash
echo "Enter number of rows"
read row
i=$row
while [ $i -gt 0 ]
do
j=1
while [ $j -le $row ]
do
if [ $j -le $i ]
then
echo -n "*"
else
echo -n " "
fi
j=$(($j+1))
done
echo ""
i=$(($i-1))
done