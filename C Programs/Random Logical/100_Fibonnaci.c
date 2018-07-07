#include<stdio.h>
int Fib(int n);
void main()
{
 int n,i=0, c;
 printf("Enter the number of elements in Fibonnaci series:-");
 scanf("%d",&n);
 printf("Fibonacci series:-\n");
 for (c=1;c<=n;c++)
 {
  printf("%d ", Fib(i));
  i++; 
 }
}
 
int Fib(int n)
{
 if ( n == 0 )
  return 0;
 else if ( n == 1 )
  return 1;
 else
  return (Fib(n-1)+Fib(n-2) );
} 