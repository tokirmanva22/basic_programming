#include <stdio.h>
 //Replacing even and odd numbers by 0 and 1 
 //respectively in array
void read(int arr[],int);
void display(int arr[],int);
void replace(int arr[],int);
 void main()
 {
 	int num,i;
 	int arr[100];
 	printf("Enter number of elements in array\n");
 	scanf("%d",&i);
 	read(arr,i);
 	printf("Entered Array is-\narr=  ");
 	display(arr,i);
 	printf("\nArray after replacing even terms by 0 and odd by 1 is-\n");
 	replace(arr,i);
 	display(arr,i);
 }

void read(int arr[],int i){
	int j;
	printf("Start entering values.\n");
	for(j=0; j<i; j++){
	printf("\narr[%d]=",j);
	scanf("%d",&arr[j]);
	}
}

void display(int arr[],int i){
	int j;
	for(j= 0; j <i; j++){
		printf("%d ",arr[j]);
	}
}

replace(int arr[],int i){
   int j;
   for(j=0; j<i;j++){
		if(arr[j]%2==0){
			 arr[j]=0;
		}else{
			arr[j]=1;
		}
	}
}
