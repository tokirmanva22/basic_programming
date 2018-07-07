#include<stdio.h>
#include<stdlib.h>
struct st{
	int id;
	int age;
	char name[50];
	float sal;
}*ptr[20];
main(){
int num,i=0;
printf("Enter number of employees.\n");
scanf("%d",&num);
while(i<num){
	ptr[i]=(struct st *)malloc(sizeof(struct st));
	printf("\nEmployee no. %d\n",i+1);
	printf("ID=");
	scanf("%d",&ptr[i] -> id);
    printf("Age=");
	scanf("%d",&ptr[i] -> age);
	printf("Name=");
	fflush(stdin);
	gets(ptr[i] -> name);
	printf("Salary=");
	scanf("%f",&ptr[i] -> sal);
	i++;
}
printf("\nDone Reading all Values. Now Showing data entered.\n");
i=0;
while(i<num){
printf("\nEmployee no. %d\n",ptr[i] -> id);	
printf("ID= %d\n",ptr[i] -> id);
printf("Age= %d\n",ptr[i] -> age);
printf("Name= ");
puts(ptr[i] -> name);
printf("Salary= %f\n",ptr[i] ->sal);
i++;
}
}