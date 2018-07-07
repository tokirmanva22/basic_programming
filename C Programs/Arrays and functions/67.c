#include<stdio.h>
void main()
{
   int m[3][3], i, j, suml=0, sumr=0;
   printf("Enter the elements of the matrix...\n");
   for(i=0;i<3;++i)
   {
      for(j=0;j<3;++j)
      {
         scanf("%d", &m[i][j]);
         if(i==j)
            suml+=m[i][j];
         if((i+j)==2)
            sumr+=m[i][j];
      }
   }
   printf("\nLeft Diagonal=%d\nRight Diagonal=%d", suml, sumr);
}
