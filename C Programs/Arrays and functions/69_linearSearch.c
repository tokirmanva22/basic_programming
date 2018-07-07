#include<stdio.h>
void read(int arr[],int);
void display(const int arr[],int);
void search(const int arr[],int,int);
main(){
	int i,num,val,arr[100];
	printf("Enter number of elements in the array\n");
	scanf("%d",&num);
	read(arr,num);
	printf("Reading data successful! Array is:\n");
	display(arr,num);
printf("\nEnter Value to be searched:\n");
scanf("%d",&val);
search(arr,num,val);
}
void read(int arr[],int i){
	int j;
	printf("Start entering values.\n");
	for(j=0; j<i; j++){
	printf("narr[%d]=",j);
	scanf("%d",&arr[j]);
	}}
void display(const int arr[],int i){
	int j;
	for(j= 0; j <i; j++){
		printf("%d ",arr[j]);
	}}
void search(const int arr[],int num,int val){
	int i,s=0;
	for(i=0;i<num;i++){
		if(val==arr[i]){
			printf("Value is found in array at position: %d",i+1);
			break;
}else s=1;
}
if(s==1) printf("Value not found in the array.\n");
}