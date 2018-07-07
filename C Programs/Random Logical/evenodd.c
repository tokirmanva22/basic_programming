#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main()
 {
 	int a;
 	printf("Enter a number\n");
 	scanf("%d",&a);
 	char b;
 	b=(a%2==0)? 'y':'n';
 	if(b=='y'){
 		printf("Number is even\n");
 	}else{
 		printf("Number is odd\n");
 	}
 	
 	return 0;
 }