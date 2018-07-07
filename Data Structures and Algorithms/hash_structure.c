//Implemenmting hash data structure by using modulus operation as hashing function.
//Creating hash-map and then searching values inside it.
#include<stdio.h>
#define MAX 100

int ptr[MAX];
int times[10]={0};

void main(){
	read();
	int option=0;
	do{
		int t;
		printf("\nEnter value to search: ");
		scanf("%d",&t);
		int index=search(t);
		if(index!= -1){
			printf("\nValue found at position: %d",index);
		}else{
			printf("\nEntered value not found!");
		}
		printf("\nEnter 1 to continue searching.");
		scanf("%d",&option);
	}while(option==1);
}

void read(){
	int i;
	for(i=0;i<10;i++){
		printf("Value no. %d: ",i);
		int x;
		scanf("%d",&x);
		int index=getIndex(x);
		printf("index: %d\n",index);
		ptr[index]=x;
	}
	
}

int getIndex(int x){
	int rem= (x%10);
	int a=times[rem];
	int r=a*10 + rem;
	times[rem]=a+1;
	return r;
}

int search(int a){
	int it=0;
	int rem=a%10;
	int value=ptr[rem];
	if(value==a){
		return rem;
	}
	while(value!=a){
		if(it>MAX){
			printf(" max range reached.\n");
			 return -1;
		}
		it+=10;
		rem+=10;
		value=ptr[rem];
	}
	if(value==a){
		return rem;
	}else{
		return -1;
	}
	
}
