#include<stdio.h>
void main()
{
   int m[3][3], i, j;
   printf("Enter the elements of the matrix:\n");
   for(i=0;i<3;++i)
      for(j=0;j<3;++i)
      scanf("%d", &m[i][j]);
   printf("\nMatrix...\n");
   for(i=0;i<3;++i)
   {
      for(j=0;j<3;++j)
         printf("%d ", m[i][j]);
      printf("\n");
   }
}
