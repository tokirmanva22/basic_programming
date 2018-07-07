#include<stdio.h>
void main(){
	int x=50;
	int *ptr;
	ptr=&x;
	printf("Value of x before changing is: %d\n",*ptr);
	*ptr=60;
	printf("After Changing, Value of x is: %d\n",*ptr);
}