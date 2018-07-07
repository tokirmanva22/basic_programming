#include <stdio.h>
void main(){
	printf("Enter number of rows to print in floyd's triangle\n");
	int i=1,j,row;
	scanf("%d",&row);
	for(j=1;j<=row;j++){
		int k;
		for(k=1;k<=j;k++){
			printf("%2d ",i);
			i++;
		}
		printf("\n");
	}
}