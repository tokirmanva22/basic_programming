#include<stdio.h>
void read(int arr[],int);
void display(const int arr[],int);
 main()
 {
 	int num,i,count=1;
 	int arr1[100],arr2[100]={-256};
 	printf("Enter number of elements in array\n");
 	scanf("%d",&num);
 	read(arr1,num);
 	printf("Entered Array is-\narr=  ");
 	display(arr1,num);
 	for(i=0;i<num;i++){
 		int j=0,same=0;
 	   while(j<count){
 			if(arr1[i]==arr2[j]){
 			same=1;
 			}
			j++;}
	   if(same==0){
		  arr2[count-1]=arr1[i];
			count++;		  
	   }}
	printf("\nAfter removing all duplicate entries Array is:\n");
 	display(arr2,count-1);	 }
void read(int arr[],int i){
	int j;
	printf("Start entering values.\n");
	for(j=0; j<i; j++){
	printf("\narr[%d]=",j);
	scanf("%d",&arr[j]);
	}}
void display(const int arr[],int i){
	int j;
	for(j= 0; j <i; j++){
		printf("%d ",arr[j]);
	}}