#include<stdio.h>
int main()
{
int arr[300],n;
printf("Enter the size of the array:-");
scanf("%d",&n);
int i,j,temp;

printf("Enter the array:-");
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
for ( i = 0, j = n - 1; i < n/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
printf("Array after reversing is:-");
for(i=0;i<n;i++)
 printf("%d \t",arr[i]);
} 
