#include<stdio.h>
void main(){
	char str[100];
	printf("Enter a String\n");
	gets(str);
    int vowel=0,cons=0;
	char *ptr=str;
	while(*ptr!='\0'){
	if((*ptr>64 && *ptr<91)||(*ptr>96 && *ptr<123)){
	switch(*ptr){
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u': vowel++;
	break;
	default: cons++;
	
	}
	}
	ptr++;
	}
	printf("On Counting, No. of vowels is: %d\nNo. of consonents is: %d\n",vowel,cons);
}