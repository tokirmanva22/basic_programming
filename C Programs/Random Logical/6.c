#include <stdio.h>
#include <math.h>

 int main(void)
 {
 	printf("Enter a number to print its size.\n");
 	int num1;
 	scanf("%d",&num1);
 	printf("Size:%d \n",sizeof(num1));
 	
        printf("Enter a floating number to print its size.\n");
 	double num2;
 	scanf("%f",&num2);
 	printf("Size:%d \n",sizeof(num2));
	
 	printf("Enter a single character to print its size.\n");
 	char c1;
 	scanf(" %c",&c1);
 	printf("Size:%d \n",sizeof(c1));
 	

 	return 0;
 }
