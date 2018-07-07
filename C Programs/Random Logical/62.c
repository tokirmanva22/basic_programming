#include<stdio.h>
void main()
{
   int sm[3][3], sum[3]={0}, sum_all=0, i, j;
   for(i=0;i<3;++i)
     {printf("Student %d:\n", i+1);
       for(j=0;j<3;++j)
       {
          printf("Subject %d", j+1);
          scanf("%d", &sm[i][j]);
          sum[i]+=sm[i][j];
          sum_all+=sm[i][j];
       }
     }
     printf("Details of students:\n");
     for(i=0;i<3;i++)
     {
        printf("\nStudent %d:", i+1);
        for(j=0;j<3;++j)
           printf("\nSubject %d = %d", j+1, sm[i][j]);
        printf("\nAverage: %f", sum[i]/3);
     }
     printf("\nAverage of three students: %f", sum_all/3);
}
