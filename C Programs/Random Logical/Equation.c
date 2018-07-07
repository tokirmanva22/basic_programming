#include <stdio.h>
 int main()
 {
 	int a,b,c,d,e,f,g;
 	float h;
 	printf("Enter 7 variables to perform mathematical operations \n");
 	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
        if(c==0){
        printf("Error:Third variable can't be zero \n");
                }
        else{
 	h=(a+b/c*d-e)*(f-g);
 	printf("Result is %f\n",h);
 	    }
 	return 0;
 }
