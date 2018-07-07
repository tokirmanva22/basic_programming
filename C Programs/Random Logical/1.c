#include <stdio.h>

 int main(void)
 {
label:
 	printf("Press 1 for using a temporary variable to swap values of two numbers \n or \nPress 2 to swap values without using any third variable. \n");
 	int choice= 1;
 	scanf("%d",&choice);
 	
 	if(choice==1){
 	printf("Enter first number:num1=");
 	float num1, num2, temp;
 	scanf("%f",&num1);
 	printf("Enter second number:num2=");
 	scanf("%f",&num2);
 	
 	temp=num1;
 	num1=num2;
 	num2=temp;
 	printf("After swapping values,\n Num1=%f ,Num2=%f ",num1, num2);
 	
 	}else{
 		if(choice==2){
   printf("Enter first number:num1=");
 	float num1, num2;
 	scanf("%f",&num1);
 	printf("Enter second number:num2=");
 	scanf("%f",&num2);
 	
 	num1=num1+num2;
 	num2=num1-num2;
 	num1=num1-num2;
 
 	printf("After swapping values,\n Num1=%f ,Num2=%f \n",num1, num2);
 	
 		}else{
 			printf("Enter 1 or 2 stupid!\nRead instructions carefully!\n");
                        goto label;
 		}
 	}
 	
 	
 
 	return 0;
 }
