#include<stdio.h>
void main()
{
 int j,i,n,f;
 double  sum=0.0;
 printf("Enter last element:-");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(i!=n)
  printf("1/%d!+",i);
 else
  printf("1/%d!=",i);
 f=1;
 for(j=1;j<=i;j++)
 {
  f=f*j;
 }
 sum=sum+(1.0)/f;
 }
 printf("%lg",sum);
}
