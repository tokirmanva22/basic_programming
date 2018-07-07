#include <stdio.h>
#include <math.h>


 void main()
 {
                 label:
 	printf("Enter a positive number\n");
 	float num=0;
 	scanf("%f",&num);
 	if((num>0)&&((num-floor(num))==0)){
 	int c=0;
                 int r=num;
 	while(r%10>0){
                         c++;
                          r=r/10;	
 	}
 	printf("The given number has %d digits.\n",c);
 	}else{
printf("Enter integer only!\n");
goto label;
}
 	
 	
 }