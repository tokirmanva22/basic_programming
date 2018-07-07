#include<stdio.h>
void main()
{
    int m[3][3], n[3][3], i, j, flag;
   printf("Enter the elements of the matrix:\n");
   for(i=0;i<3;++i)
      for(j=0;j<3;++i)
         scanf("%d", &m[i][j]);
   for(i=0;i<3;++i)
      for(j=0;j<3;++j)
         n[i][j]=m[j][i];
   for(i=0;i<3;++i)
      for(j=0;j<3;++j)
      {
         if(m[i][j]!=n[i][j])
            {flag=1; goto p;}
         else
            flag=0;
      }
    p:
    if(flag==0)
      printf("\nMAtrix is symmetric!");
    else if(flag==1)
      printf("\nMatrix is not symmetric!");
}
