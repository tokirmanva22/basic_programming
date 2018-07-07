#!/bin/bash
echo Enter first number.
read a
echo Enter second number.
read b
echo Enter third  number.
read c
great=$a
if [ $great -lt $b ]
then
great=$b
fi
if [ $great -lt $c ]
then
great=$c
fi
echo -n Greatest number is=
echo $great