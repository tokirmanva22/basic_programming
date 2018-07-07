#include <stdio.h>
 //Finding number in array
void read(int arr[],int);
void display(int arr[],int);
int find(int arr[],int,int);
 void main()
 {
 	int num,loc;
 	int arr[6];
 	read(arr,6);
 	display(arr,6);
 	printf("\nEnter a number to find in array.\n");
 	scanf("%d",&num);
 	loc=find(arr,num,6);
 	if(loc>=0){
 	printf("The number %d is present on position no. %d\n",num,loc+1);
 }else{
 	printf("Entered number is not present in this array.\n");
 }
 }

void read(int arr[],int i){
	int j;
	for(j=0; j<i; j++){
	printf("\narr[%d]=",j);
	scanf("%d",&arr[j]);
	}
}

void display(int arr[],int i){
	printf("Entered Array is-\narr=  ");
	int j;
	for(j= 0; j <i; j++){
		printf("%d ",arr[j]);
	}
}

int find(int arr[],int num,int i){
   int j,lo= -1;
   for(j=0; j<i;j++){
		if(num==arr[j]){
			 lo=j;
			 break;
		}
	}
	return lo;
}