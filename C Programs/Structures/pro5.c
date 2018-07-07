#include<stdio.h>
main(){
struct dist{
float feet;
float inches;
}a,b,sum;
printf("Enter distances in Feet and Inches separated by space\nDistance 1: ");
scanf("%f %f",&a.feet,&a.inches);
printf("\nDistance 2:");
scanf("%f %f",&b.feet,&b.inches);
sum.feet=a.feet + b.feet;
float in=a.inches + b.inches;
while(in>=12.0){
sum.feet++;
in-=12;
}
sum.inches=in;
printf("Sum of Distances is %f Feet %f Inches.\n",sum.feet,sum.inches);
}