#include<stdio.h>
void main()
{
   int a[10], i, n, temp;
   printf("Enter the elements of the array:\n");
   for(i=0;i<10;++i)
   {
      printf("Element %d...", i+1);
      scanf("%d", &a[i]);
   }
   printf("\nArray: ");
   for(i=0;i<10;++i)
      printf("%d ", a[i]);
   printf("\nHow many elements do you want to cyclically permutate?(max. 10)...");
   scanf("%d", &n);
   int j=1;
   while(j<=n)
   {
      temp=a[9];
      for(i=9;i>0;--i)
         a[i]=a[i-1];
      a[0]=temp;
      ++j;
   }
   printf("\nArray after permutation: \n");
   for(i=0;i<10;++i)
      printf("%d ", a[i]);
}
