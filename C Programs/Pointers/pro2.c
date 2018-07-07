#include<stdio.h>
void main(){
	int x,y;
	int *ptr1;
	int *ptr2;
	printf("Enter value of x and y\n");
	scanf("%d %d",&x,&y);
	ptr1=&x;
	ptr2=&y;
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("After Swapping, Value of x is: %d\nValue of y is: %d\n",x,y);
}