#include<stdio.h>
void main()
{
int a[300],n;
printf("Enter the size of the array:-");
scanf("%d",&n);
int i=0,t,r,rn;

printf("Enter the array:-");
for(i=0;i<=n;i++)
 scanf("%d",&a[i]);
int j=n;
i=0;
while(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
i++;
j--;
}
printf("Array after reversing is:-");
for(i=0;i<=n;i++)
 printf("%d \t",a[i]);
} 
