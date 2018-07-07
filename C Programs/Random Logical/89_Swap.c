#include<stdio.h>
void swap(int a,int b);
void main()
{
int a,b;
printf("Enter the first number:-");
scanf("%d",&a);
printf("Enter the second number:-");
scanf("%d",&b);
swap(a,b);
}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;
printf("Numbers After Swapping are:-\n");
printf("The first number is:-%d",a);
printf("\n The second number is:-%d",b);
}