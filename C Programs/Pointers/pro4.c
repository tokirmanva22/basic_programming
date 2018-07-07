#include<stdio.h>
void read(int *x,int size){
int i=0;
while(size>0){
printf("x[%d] =",i);
scanf("%d",&x[i]);
i++;
size--;}
}

void show(int *x,int size){
int i=0;
while(size>0){
printf("x[%d] =%d at address= %d\n",i,x[i],&x[i]);
i++;
size--;
}
}
void main(){
	int x[50]={0};
	int size=0;
	printf("Enter Size of array.\n");
	scanf("%d",&size);
	printf("Enter values Now:\n");
	read(x,size);
	printf("Done reading values.\n Now showing entered values with addresses.\n");
	show(x,size);
	
}