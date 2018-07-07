#include <stdio.h>

void main(){
printf("Enter a number to check if it is palindrome or not.\n");
long num,rnum=0;
scanf("%ld",&num);
long n=num;
while(num!=0){
int rem=num%10;
rnum=(long)rnum*10+rem;
num=num/10;
}
if(n==rnum){
printf("Given number is a palindrome.\n");
}else{
printf("Given number is not a palindrome.\n");
}

}
