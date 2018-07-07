#include<stdio.h>
void main()
{
   int arr[20], small, i, n;
   printf("Enter the size of the array(max. 20)...");
   scanf("%d", &n);
   printf("Enter the elements of the array:\n");
   for(i=0;i<n;++i)
   {
      printf("Element %d:",i+1);
      scanf("%d", &arr[i]);
   }
   small=arr[0];
   for(i=1;i<n;++i)
      if(small>arr[i])
      small=arr[i];
   printf("The smallest element is %d.", small);
}
