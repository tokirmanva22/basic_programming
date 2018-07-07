#include <stdio.h>
 //Compiler version gcc 6.3.0

 int main(void)
 {
 	printf("Tables are-\n");
 	int i, j;
 	for(i=1;i <=10;i++){
 		for(j=1;j <=10;j++){
 			printf("%3d",j*i);
 		}
 		printf("\n");
 	}
 	
 	
 	return 0;
 }