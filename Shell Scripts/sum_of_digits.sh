#!/bin/bash
echo "Enter a number to get sum of its digits."
read n
ans=0
while [ $n -ne 0 ]
do
rem=$(($n%10))
ans=$(($ans+$rem))
n=$(($n/10))
done
echo "Sum of digits is $ans"