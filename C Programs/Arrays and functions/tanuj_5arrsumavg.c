#include <stdio.h>
 //Finding sum,average and product of array elements.
void read(float arr[],int);
void display(float arr[],int);
float add(float arr[],int);
float avg(float arr[],int);
float pro(float arr[],int);
 void main()
 {
 	int i;
 	float sum,average,product;
 	float arr[100];
 	printf("Enter the length of array.\n");
 	scanf("%d",&i);
 	read(arr,i);
 	display(arr,i);
 	sum=add(arr,i);
 	average=avg(arr,i);
 	product=pro(arr,i);
 	printf("\nSum= %f\nAverage= %f\nProduct of all terms= %f\n", sum,average,product);
 }

void read(float arr[],int i){
	int j;
	for(j=0; j<i; j++){
	printf("\narr[%d]=",j);
	scanf("%f",&arr[j]);
	}
}

void display(float arr[],int i){
	printf("\nEntered Array is-\narr=  ");
	int j;
	for(j= 0; j <i; j++){
		printf("%f ",arr[j]);
	}
}

float add(float arr[],int i){
   int j;
   float s=0;
   for(j=0; j<i;j++){
		s+=arr[j];
	}
	return s;
}

float avg(float arr[],int i){
   int j;
   float s=0;
   for(j=0; j<i;j++){
		s+=arr[j];
	}
	return s/i;
}

float pro(float arr[],int i){
   int j;
   float p=1;
   for(j=0; j<i;j++){
		p*=arr[j];
	}
	return p;
}
