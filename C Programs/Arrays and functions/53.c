#include<stdio.h>
void main()
{
   int a[20], n, i, large1, large2;
   printf("Enter the size of the array:");
   scanf("%d", &n);
   printf("Enter elements...\n");
   for(i=0;i<n;++i)
   {
      printf("Element %d:", i+1);
      scanf("%d", &a[i]);
   }
   large1=a[0];
   for(i=1;i<n;++i)
   {
      if(large1<a[i])
         large1=a[i];
   }
   large2=a[0];
   for(i=0;i<n;++i)
   {
      if(a[i]==large1)
         continue;
      else if(large2<a[i])
         large2=a[i];
   }
   printf("Second largest element is %d.", large2);
}
