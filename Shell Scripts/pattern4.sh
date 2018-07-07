#!/bin/bash
read row
i=1
while [ $i -le $row ]
do
j=1
while [ $j -le $row ]
do
echo -n "*"
j=$(($j+1))
done
echo ""
i=$(($i+1))
done