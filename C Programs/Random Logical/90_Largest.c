#include <stdio.h>
void main()
{
 int a,b,c;
 printf("Enter three different numbers: ");
 scanf("%d %d %d", &a,&b,&c);
 if( a>=b && a>=c )
  printf("The largest number is:-%d", a);
 if( b>=a && b>=c )
  printf("The largest number is:-%d", b);
 if( c>=a && c>=b )
  printf("The largest number is:-%d", c);
} 