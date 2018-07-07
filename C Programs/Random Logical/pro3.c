#include <stdio.h>
#include <math.h>
int main()
{
printf("Enter sides of triangle: \n");
float a,b,c,s,x,area;
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
x=s*(s-a)*(s-b)*(s-c);
area=pow (x,0.5);
printf("Area of Triangle is : %f\n",area);
return 0;
}

