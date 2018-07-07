#include<stdio.h>
void read(int arr[100][100],int,int);
void display(const int arr[100][100],int,int);
void add(int arr1[100][100],int arr2[100][100],int, int);
void sub(int arr1[100][100],int arr2[100][100],int, int);
main(){
int i,row,col,arr1[100][100],arr2[100][100];
	printf("Enter number of rows and columns in the matrices.\n");
	scanf("%d %d",&row,&col);
	printf("Enter values of Matrix:1\n");
	read(arr1,row,col);
	printf("Enter values of Matrix:2\n");
	read(arr2,row,col);
	printf("Reading data successful! Matrix:1 is-\n");
	display(arr1,row,col);
	printf("Reading data successful! Matrix:2 is-\n");
	display(arr2,row,col);
	add(arr1,arr2,row,col);
	sub(arr1,arr2,row,col);
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
void add(int arr1[100][100],int arr2[100][100],int r, int c){
	int i,j,sum[100][100];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}}
	printf("Sum of matrices is:\n");
	display(sum,r,c);
}
void sub(int arr1[100][100],int arr2[100][100],int r, int c){
	int i,j,minus[100][100];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			minus[i][j]=arr1[i][j]-arr2[i][j];
		}}
	printf("Subtraction of matrices is:\n");
	display(minus,r,c);
}