#include<stdio.h>
void main()
{
   int a[10], odd[10], even[10], i, j=0, k=0, ce=0, co=0;
   printf("Enter the elements of the array:\n");
   for(i=0;i<10;++i)
   {
      printf("Element %d...", i+1);
      scanf("%d", &a[i]);
   }
   for(i=0;i<10;++i)
   {
      if(a[i]%2==0)
      {even[j]=a[i];++j;ce++;}
      else
      {odd[k]=a[i];++k;co++;}
   }
   printf("\nEven elements: ");
   for(k=0;k<ce;++k)
      printf("%d ", even[k]);
   printf("\nOdd elements: ");
   for(j=0;j<co;++j)
      printf("%d ", odd[j]);
}
