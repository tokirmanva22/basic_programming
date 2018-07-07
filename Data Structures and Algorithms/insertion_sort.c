//Implement insertion sort but using pointers instead of arrays.
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
	sort(ptr);
	printf("\nSorted Array is-\n");
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

// insertion sort where left part of list is always sorted
void sort(int *ptr){
	int i=1;
	for(i;i<num;i++){
		int j,temp=*(ptr+i);
		for(j=i-1;j>=0;j--){
			if(temp < *(ptr+j)){
				*(ptr+j+1)=*(ptr+j);
			}else{
				break;
			}
		}
		*(ptr+j+1)=temp;
	}
}