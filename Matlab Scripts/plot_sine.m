clc
clear all
close all
t=0:pi/1000:2*pi;
y=sin(t);
plot(t,y)
hold on
plot(t,cos(t))
grid on
