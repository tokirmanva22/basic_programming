#!/bin/bash
echo "Enter a number"
read a
if [ $a -eq 0 ]
then
echo "You entered a Zero"
elif [ 0 -gt $a ]
then
echo "Number entered is negative."
else
echo "Number entered is positive"
fi
