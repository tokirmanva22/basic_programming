#include <stdio.h>

 int main(void)
 {
   label1:
 	printf("Enter an alphabet!\n");
 	char c;
 	scanf(" %c",&c);
 	
 	if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')){
 		label2:
 		printf("Enter a month number\n");
 		int mon;
 		scanf(" %d",&mon);
 		switch(mon){
 			case 2: printf("28/29days\n");
 			break;
 		  case 4:
 		  case 6:
 		  case 9:
 		  case 11:printf("30days\n");
 		 break;
 		  case 1:
 		  case 3:
 		  case 5:
 		  case 7:
 		  case 8:
 		  case 10:
 		  case 12: printf("31days\n");
 		  break;
 		  default: printf("Enter month number between 1 and 12\n");
 		  goto label2;
 		}
 		
 	}
 	else{
 		printf("You entered a consonant or some invalid character.\n ");
 		goto label1;
 	}
 	
 	
 	return 0;
 }
