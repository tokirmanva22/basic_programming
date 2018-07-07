#include <stdio.h>

 int main()
 {{
 	
 }
 	label:
 	printf("Enter your sex!\n M-for male, F-for female.\n");
 	char sex;
 	scanf("%c",&sex);
 if(sex=='M'|| sex=='m'){
 	float num1, num2,temp;
 	printf("Enter two numbers swap.\n Enter first number:");
   scanf("%f",&num1);
   printf("\nEnter second number:");
   scanf("%f",&num2);
   temp=num1;
   num1=num2;
   num2=temp;
   printf("\nAfter swapping numbers are-\nFirst number=%f \nSecond number=%f",num1, num2);
 
 }
 else if(sex='F'|| sex=='f'){
 	float num1, num2, sum;
 	printf("Enter two numbers to add.\nEnter first number:");
   scanf("%f",&num1);
   printf("\nEnter second number:");
   scanf("%f",&num2);
   sum=num1+num2;
   printf("\nSum of numbers is:%f\n",sum);
   
 }else{
 	printf("Enter only 'M' or'F' ");
 	goto label;
 }
 	
 	return 0;
 }
