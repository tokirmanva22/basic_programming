#include <stdio.h>

void main(){
printf("Enter a number to reverse it.\n");
long int num,rnum=0;
scanf("%ld",&num);
long int n=num;
while(num!=0){
int rem=num%10;
rnum=(long)rnum*10+rem;
num=num/10;
}
printf("Reverse is %ld.\n",rnum);
}
