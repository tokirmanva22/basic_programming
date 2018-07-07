#include <stdio.h>
#include <math.h>
 int main(void)
 {
 	printf("Enter a number to see its FLOOR, CEIL and ROUND values!\n");
 	float val;
 	scanf("%f",&val);
 	printf("You enterd %f ,\n its FLOOR value is %f,\n its CEIL value is %f ,\n and its ROUND value is %f .\n", val,floor(val),ceil(val),round(val));
 
 	return 0;
 }
