#include <stdio.h>
 //Factorial
int fact( int);
void main()
 { label:
 	printf("Enter a positive integer only to find its factorial\n");
 	int num,fac;
 	scanf("%d",&num);
 	if(num> 0){
 	fac=fact(num);
 	printf("Factorial of %d is %d \n",num,fac);
 }else{
 goto label;
 }}
int fact(int num){
	if(num==1)
	return 1;
	else 
	return num*fact(num-1);
}
