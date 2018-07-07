#include <stdio.h>
 //Finding number in array
void read(float arr[],int);
void display(float arr[],int);
float large(float arr[],int);
float small(float arr[],int);

 void main()
 {
 	int i,ch;
 	float arr[100];
 	printf("Enter the length of array.\n");
 	scanf("%d",&i);
 	read(arr,i);
 	display(arr,i);
 	label:
 	printf("\nEnter your choice for finding-\n1-Largest Number\n2-Smallest Number\n3-Both\n");
 	scanf("%d",&ch);
 	switch(ch){
 		case 1: printf("Largest number is %f\n",large(arr,i));
 		        break;
 		case 2: printf("Smallest number is %f\n",small(arr,i));
 		        break;
 		case 3: printf("Largest number is %f\n,And Smallest number is %f\n",large(arr,i),small(arr,i));
 		        break;
 		default : printf("You Entered a wrong choice!\n");
 		         goto label;
 		         break;
 	}
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

float large(float arr[],int i){
   int j;
   for(j=1; j<i;j++){
		if(arr[0]<arr[j]){
			float temp=arr[0];
			arr[0]=arr[j];
			arr[j]=temp;
		}
	}
	return arr[0] ;
}

float small(float arr[],int i){
   int j;
   for(j=1; j<i;j++){
		if(arr[0]>arr[j]){
			float temp=arr[0];
			arr[0]=arr[j];
			arr[j]=temp;
		}
	}
	return arr[0] ;
}