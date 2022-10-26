#include<stdio.h>
void read(int arr[],int);
void display(const int arr[],int);
main(){
	int num,arr[100];
	printf("Enter number of elements in the array\n");
	scanf("%d",&num);
	read(arr,num);
	printf("Reading data successful! Array is:\n");
	display(arr,num);
}
void read(int arr[],int i){
	int j;
	printf("Start entering values.\n");
	for(j=0; j<i; j++){
	printf("narr[%d]=",j);
	scanf("%d",&arr[j]);
	}
}

void display(const int arr[],int i){
	int j;
	for(j= 0; j <i; j++){
		printf("%d ",arr[j]);
	}
}
