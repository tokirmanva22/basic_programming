#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main()
 {
 	printf("Enter two numbers to add\n");
 	float a,b,c;
 	scanf("%f %f",&a,&b);
 	c=a-(-b);
 	printf("Sum of two numbers is %f\n", c);
 	return 0;
 }