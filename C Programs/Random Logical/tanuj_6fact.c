#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main(void)
 {
 	printf("Enter a number\n");
 	int num;
 	scanf(" %d",&num);
 	if(num> 0){
 		printf("Do you want to find factorial of this number.Enter 'Y' for yes.\n");
 		char ch;
 		scanf(" %c",&ch);
 	  if((ch=='Y')||(ch=='y')){
   		int i,fact=1;
   		for(i=1;i <=num;i++){
   			fact=fact*i;
   		}
   		printf("Factorial of given numbers is %d\n",fact);
   	}else{
   		printf("Thank You\n");
   	}
 		
 	}else{
 		printf("Thank You\n");
 	}
 	
 	return 0;
 }