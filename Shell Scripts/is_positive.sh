#!/bin/bash
echo "Enter a number"
read a
if [ $a -lt 0 ]
then
echo "Number entered is negative."
elif [ $a -eq 0 ]
then
echo "You entered a Zero"
else
echo "Number entered is positive"
fi
