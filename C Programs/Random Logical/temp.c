#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main()
 {
 	float c, f;
 	printf("Enter temperature in celsius\n");
 	scanf("%f",&c);
 	f=c*1.8+32;
 	printf("Temperature in fahrenheit is %f\n", f);
 	return 0;
 }