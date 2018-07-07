#include <stdio.h>


 int main(void)
 {
 	printf("Enter time in hh:mm:ss format\n");
        int hour,min,sec;
        scanf("%d%d%d",&hour,&min,&sec);
 	printf("You entered %d:%d:%d\n",hour,min,sec);
 	
 	return 0;
 	
 }
