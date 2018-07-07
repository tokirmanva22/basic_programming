#include <stdio.h>
#include <math.h>

 int main(void)
 {
 	printf("Enter a decimal number to find its octal equivalent.\n");
 	int a;
 	scanf("%d",&a);
 	int num=a;
 	//octal conversion
 	
 	float bits=log2(num);
 	bits=bits/log2(8);
 	int size;
 	if(bits-floor(bits)==0){
 		size=(int)bits+1;
 	}else{
 		size=ceil(bits);
 	}
 	
 	int str[size];
 	size--;
 	int i=size;
 	while(size>=0){
 	  int rem=num%8;
 	  str[size]=rem;
 	  num= (num-rem)/8;
 	  size--;
 	}
 	//printing the octal code
 	int j;
 	printf("You entered %d\n Its octal is ",a);
 for(j=0;j<=i;j++){
 	printf("%d",str[j]);
 }
 	
 	return 0;
 }
