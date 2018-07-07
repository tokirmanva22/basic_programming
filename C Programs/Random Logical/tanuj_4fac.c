#include <stdio.h>
#include <math.h>

void main(){
printf("Enter a number to find its factorial.\n");

float num,fac=1;
label:
scanf("%f",&num);
float n=num;
if(num<0){
printf("It is not acceptable!\nEnter positive integer now.\n");
goto label;
}
else if(num-floor(num)!=0){
printf("Enter a positive INTEGER only!\nEnter now.\n");
goto label;
}
else{
while(num!=0){
fac=fac*num;
num--;
}
printf("Factorial of %f is %f\n",n,fac);
} 


}
