#include<stdio.h>
void main(){
	printf("Enter Number of rows to print of pyramid\n");
	int row,i;
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		int j;
		int l=i;
		for(j=row;j>=1;j--){
						if(j<=i){
				printf("%d ",l);
				l++;
			}else{
				printf("  ");
			}
		}
		int k;
		int m=2*i-2;
		for(k=1;k<=i-1;k++){
			printf("%d ",m);
			m--;
		}
		printf("\n");
		
	}
}