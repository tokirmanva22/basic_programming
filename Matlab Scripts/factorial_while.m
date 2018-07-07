clc
clear all
close all
n=input('Enter a positive number: ');
fact1=1;

while n~=0
    fact1=fact1*n;
    n=n-1;
end

fact1