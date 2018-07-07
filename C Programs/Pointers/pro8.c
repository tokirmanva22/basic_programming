#include<stdio.h>
int main(){
int x=42;
int *ptr1=&x;
int **ptr2=&ptr1;
printf("Value of x directly is: %d\nValue of x by single pointer is: %d\nValue of x by pointer to a pointer is: %d",x,*ptr1,**ptr2);
}