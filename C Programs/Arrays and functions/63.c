#include<stdio.h>
void main()
{
   int mat[3][3], i, j;
   int n,m;
   scanf("%d %d",&n,&m);
   printf("Enter the elements of the matrix:\n");
   for(i=0;i<3;++i)
      for(j=0;j<3;++i)
      scanf("%d", &mat[i][j]);
   printf("\n...Matrix...\n");
   for(i=0;i<n;++i)
   {
      for(j=0;j<m;++j)
         printf("%d ", mat[i][j]);
      printf("\n");
   }
}
