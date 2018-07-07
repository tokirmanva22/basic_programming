#include<stdio.h>
void read(int arr[100][100],int,int);
void display(const int arr[100][100],int,int);
void display2(const int arr[],int i);
main(){
int i,row,col,arr[100][100],arr1[100],arr2[100],a1=0,a2=0;
	printf("Enter number of rows and columns in the matrices.\n");
	scanf("%d %d",&row,&col);
	printf("Enter values of Matrix:1\n");
	read(arr,row,col);
	display(arr,row,col);
	for(i=0; i<row; i++){
		int j;
		for(j=0;j<col;j++){
			if(arr[i][j]%2==0){
				arr1[a1]=arr[i][j];
				a1++;
			}else{
				arr2[a2]=arr[i][j];
				a2++;  }
	}}
	printf("Even numbers entered are:\n");
	display2(arr1,a1);
	printf("\nOdd numbers entered are:\n");
	display2(arr2,a2);
}
void read(int arr[100][100],int r,int c){
	int j,k;
	printf("Start entering values.\n");
	for(j=0; j<r; j++){
		for(k=0;k<c;k++){
			printf("arr[%d][%d]=",j+1,k+1);
			scanf("%d",&arr[j][k]);
		}
	}}
void display(const int arr[100][100],int r,int c){
	int j,k;
	for(j= 0; j <r; j++){
		for(k=0;k<c;k++){
		printf("%d ",arr[j][k]);   }
		printf("\n");
	}}
void display2(const int arr[],int i){
	int j;
	for(j= 0; j <i; j++){
		printf("%d ",arr[j]);
	}}