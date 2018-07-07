#include<stdio.h>
void convert(int h,int m,int s);
void main()
{
int h,m,s;
printf("Enter time in HH:MM:SS -");
scanf("%d:%d:%d",&h,&m,&s);
convert(h,m,s);
}
void convert(int h,int m,int s)
{
int x=m*60;
int y=h*3600;
int a=x+y+s;
printf("The entered time is %d seconds",a);
}	