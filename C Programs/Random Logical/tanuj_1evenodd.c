#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main(void)
 {
 	printf("Enter an integer\n");
 	int num,i,j;
 	scanf(" %d",&num);
 	if(num> 0){
 	printf("Odd numbers are-\n");
 	for(i=1; i<=num;i=i+2){
 		printf("%d ",i);
 	}
 	printf("\nEven numbers are-\n");
 	for(j=2;j <=num;j=j+2){
 		printf("%d ",j);
 	}
 	}else{
 		printf("You have entered invalid value\n");
 	}
 	
 	
 	return 0;
 }