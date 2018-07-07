//Sort elements on alternate positions in different ways
//eg. All the elements on even positions will be sorted in ascending order and
//those on odd positions will be sorted in descending order.
#include<stdio.h>

main(){
	printf("Enter even size of array.\n");
	int num,arr[50];
	scanf("%d",&num);
	scan(arr,num);
	printf("Entered array is:\n");
	printArr(arr,num);
	altSort(arr,num);
	printf("\nAlternative sorted array is:\n");
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

void altSort(int arr[],int num){
	int i;
	for(i=0;i<num;i+=2){
		int j;
		for(j=0;j<num-i-2;j+=2){
			if(arr[j]>arr[j+2]){
				int temp=arr[j];
				arr[j]=arr[j+2];
				arr[j+2]=temp;
			}
		}
	}
	for(i=0;i<num;i+=2){
		int j;
		for(j=1;j<num-i-2;j+=2){
			if(arr[j]<arr[j+2]){
				int temp=arr[j];
				arr[j]=arr[j+2];
				arr[j+2]=temp;
			}
		}
	}
}