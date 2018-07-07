#include <stdio.h>


 int main(void)
 {
label:
        printf("\nEnter 1 for checking numbers using if-else statements \n or \nEnter 2 for checking numbers using ternary operator.\n");
        int choice=1;
        scanf("%d",&choice);
        if(choice==1){

	printf("Enter three numbers to check largest of them.\n");
 	float num1, num2, num3, large;
 	scanf("%f %f %f",&num1,&num2,&num3);
 	large=num1;
 	
 	if(num2>large){
 		large=num2;
 	}
        if(num3>large){
 		large=num3;
 	}
 	printf("Largest number is %f\n",large);

 	}
        else if(choice==2){

        printf("Enter three numbers to check largest of them.\n");
 	float num1, num2, num3, large;
 	scanf("%f %f %f",&num1,&num2,&num3);
 	large=num1;
 	
        large=(num2>large)? num2:large;
        large=(num3> large)? num3:large;
 	printf("Largest number is %f\n",large);
        }
        else{
        printf("Enter only 1 or 2 stupid!\nRead Instructions Carefully!");
goto label;
        }

 	return 0;
 }
