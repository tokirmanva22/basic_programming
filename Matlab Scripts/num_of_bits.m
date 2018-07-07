clc
clear all
close all

num=input('Enter a Number to find number of bits used');
n=0;
while (2.^n<num)
    n=n+1;
end
if(2.^n==num)
    n+1
else
    n
end
    
