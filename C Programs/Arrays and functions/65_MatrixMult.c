#include<stdio.h>
void main()
{
int a[3][3],b[3][3],m[3][3];
int i=0,j=0,k=0;
printf("Enter the elements of first matrix:-\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  scanf("%d",&a[i][j]);
}
printf("Enter the elements of second matrix:-\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  scanf("%d",&b[i][j]);
}
for (i=0;i<3;i++)
{
 for (j=0;j<3;j++)
 {
  m[i][j] = 0;
  for (k=0;k<3;k++)
   m[i][j] += a[i][k]*b[k][j];
 }
}  
printf("The multiplication of the two matrices is:-\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  printf("%d ",m[i][j]);
 printf("\n");

}
}