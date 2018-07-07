#include<stdio.h>
main(){
	int x=5;
	int *ptr;
	ptr=&x;
	int *pr;
	pr=ptr;
	printf("Value of x directly is: %d\nValue of x by first pointer is: %d\nValue of x by second pointer is: %d",x,*ptr,*pr);
}