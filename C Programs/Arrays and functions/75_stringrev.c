#include<stdio.h>
#include<string.h>
main(){
printf("Enter a string:\n");
char str[100];
fflush(stdin);
gets(str);
int i=0,len=0;
while(str[i]!='\0'){
	len++;
	i++;
}
printf("\nReversed string is:\n");
len-=1;
while(len>=0){
	printf("%c",str[len]);
	len--;
}
}