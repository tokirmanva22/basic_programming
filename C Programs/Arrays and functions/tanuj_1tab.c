#include <stdio.h>
 //Table
void table( int);
void main()
 { label:
 	printf("Enter a positive integer only to print its tabel\n");
 	int num;
 	scanf("%d",&num);
 	if(num> 0){
 	printf("Table of %d is-\n",num);
 	table(num);
 }else{
 goto label;
 }}
void table(int num){
	int i;
	for(i=1; i<=10; i++){
		printf("%2d\n",i*num);
	}
}
