#include <stdio.h>
#include <math.h>


 int main(void)
 {
 	printf("Enter a decimal number to find its hexadecimal equivalent.\n");
 	int a;
 	scanf("%d",&a);
 	int num=a;
 	// conversion
 	
 	float bits=log2(num);
 	bits=bits/log2(16);
 	int size;
 	if(bits-floor(bits)==0){
 		size=(int)bits+1;
 	}else{
 		size=ceil(bits);
 	}
 	
 	char str[size];
 	size--;
 	int i=size;
 	while(size>=0){
 	  int rem=num%16;
 	  
 	  switch(rem){
   		case 10: str[size]='a';
   		break;
   		case 11: str[size]='b';
   		break;
   		case 12: str[size]='c';
   		break;
   		case 13: str[size]='d';
   		break;
   		case 14: str[size]='e';
   		break;
   		case 15: str[size]='f';
   		break;
   		default: str[size]=rem;
   	}
 	  
 	  num= (num-rem)/16;
 	  size--;
 	}

 	//printing the code
 	int j;
 	printf("You entered %d\n Its hexadecimal is ",a);
 for(j=0;j<=i;j++){
int c1=str[j];
switch(c1){
case 'a': printf("%c",'a');
break;
case 'b': printf("%c",'b');
break;
case 'c': printf("%c",'c');
break;
case 'd': printf("%c",'d');
break;
case 'e': printf("%c",'e');
break;
case 'f': printf("%c",'f');
break;
default: printf("%d",str[j]);
 }   

 }
 printf("\n");	
 	return 0;
 }
