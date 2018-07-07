#include<stdio.h>
void main()
{
int a[3][3];
int i=0,j=0;
printf("Enter the elements of first matrix:-\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
}
printf("The Transpose of the given matrix is:-\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  printf("%d ",a[j][i]);
 printf("\n");
}
}