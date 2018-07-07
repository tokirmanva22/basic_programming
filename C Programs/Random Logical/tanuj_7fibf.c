#include <stdio.h>

int fib(int x,int y,int w){
if(w>0){
int z=x+y;
printf("%d ",z);
x=y;
y=z;
w--;
return (fib(x,y,w));
}else{
printf("End");
}
}

void main(){
printf("Enter a number of terms of fibonacci series to print.\n");
int num;
scanf("%d",&num);
int a=0,b=1;
printf("0 1 ");
int c=fib(a,b,num);

}