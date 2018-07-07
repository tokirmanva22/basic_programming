#include <stdio.h>
 //Sum of digits
int sum=0,co=0;
int dig(int);
 void main()
 {
 	printf("Enter a number to count its digits.\n");
 	int num,digsum;
 	scanf("%d",&num);
 	digsum=dig(num);
 	printf("Number= %d\nNumber of digits= %d\nSum of digits= %d\n",num,co,digsum);
 }

int dig(int num){
	int rem=num%10;
	if(rem==0){
		return sum;
	}else{
		co++;
		sum+=rem;
		return dig(num/10);
	}
}
