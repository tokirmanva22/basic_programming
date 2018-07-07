#include<stdio.h>
void read(int *x){
int i=0;
while(i<6){
printf("x[%d] =",i);
scanf("%d",&x[i]);
i++;
}
}

void main(){
	int x[6]={0};
	int sum=0,i=0;
	printf("Start entering values Now:\n");
	read(x);
	int *ptr;
	ptr= x;
	while(i<6){
	sum+= *ptr;
	ptr++;
	i++;
	}
	printf("Done reading values.\nSum of all values is %d",sum);
}