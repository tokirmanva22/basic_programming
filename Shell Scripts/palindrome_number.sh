#!/bin/bash
echo "Enter a number to check if it is a palindrome or not"
read n
num=$n
ans=0
while [ $n -ne 0 ]
do
rem=$(($n%10))
ans=$(($ans*10+$rem))
n=$(($n/10))
done
if [ $num -eq $ans ]
then
echo "Number is a Palindrome"
else
echo "Number is not a palindrome"
fi