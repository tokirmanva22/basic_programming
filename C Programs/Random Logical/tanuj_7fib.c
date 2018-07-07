#include <stdio.h>

void main(){
printf("Enter  number of terms of fibonacci series to print.\n");
int num;
scanf("%d",&num);
num-=2;
 int a=0,b=1;
printf("0 1 ");
while(num>0){
 int c=a+b;
printf("%d ",c);
a=b;
b=c;
num--;
}
printf(" \n");

}
