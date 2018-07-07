//Reversing first and second half of array individually, without using extra arrays.
#include<stdio.h>

main(){
	printf("Enter even size of array.\n");
	int num,arr[50];
	scanf("%d",&num);
	scan(arr,num);
	printf("Entered array is:\n");
	printArr(arr,num);
	rotate(arr,0,num/2);
	rotate(arr,num/2,num);
	printf("\nRotated array is:\n");
	printArr(arr,num);
}

void scan(int arr[],int num){
	int i=0;
	for(i;i<num;i++){
		scanf("%d",&arr[i]);
	}
}

void printArr(int arr[],int num){
	int i=0;
	for(i;i<num;i++){
		printf("%d, ",arr[i]);
	}
}

void rotate(int arr[],int start,int end){
	int i=start,j=end-1,mid=(start+end)/2;
	for(i;i<mid;i++,j--){
		//swapping two numbers without using third variable
		arr[i]=arr[i]+arr[j];
		arr[j]=arr[i]-arr[j];
		arr[i]=arr[i]-arr[j];
	}
}