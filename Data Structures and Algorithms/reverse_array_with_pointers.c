//Reverse an array using pointers.
//Lab exam question.
#include<stdio.h>
#include<stdlib.h>

int num;
void main(){
	printf("Enter number of elements.\n");
	scanf("%d",&num);
	int *base=(int *)malloc(num*sizeof(int));
	int *ptr=base;
	read(ptr);
	printf("Entered Array is-\n");
	printarr(ptr);
	reverse(ptr);
	printf("\nReversed Array is-\n");
	printarr(ptr);
}

void read(int *ptr){
	int i=0;
	while(i!=num){
		printf("arr[%d]=",i);
		scanf("%d",ptr);
		ptr++;
		i++;
	}
}

void printarr(int *ptr){
	int i=0;
	for(i;i<num;i++,ptr++){
		printf("%d, ",*ptr);
	}
}

void reverse(int *ptr1){
	int i=0,mid=num/2;
	int *ptr2=ptr1+num-1;
	for(i=1;i<=mid;i++,ptr1++,ptr2--){
		int temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
	}
}