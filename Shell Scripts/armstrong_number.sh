#!/bin/bash
echo "Enter a number to check whether it is an Armstrong number or not."
read n
num=$n
ans=0
 while [ $n -ne 0 ]
 do
 rem=$(($n%10))
 n=$(($n/10))
 ans=$(($ans+($rem*$rem*$rem)))
 done
 if [ $ans -eq $num ]
 then
 echo "Given number is an Armstrong number."
 else
 echo "Given is not a Armstrong number"
 fi