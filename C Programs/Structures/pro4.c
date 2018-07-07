#include<stdio.h>
main(){
struct st{
	int id;
	int age;
	char name[50];
	float sal;
}a[50];
int num,i=0;
printf("Enter number of employees.\n");
scanf("%d",&num);
while(i<num){
	printf("\nEmployee no. %d\n",i+1);
	printf("ID=");
	scanf("%d",&a[i].id);
    printf("Age=");
	scanf("%d",&a[i].age);
	printf("Name=");
	fflush(stdin);
	gets(a[i].name);
	printf("Salary=");
	scanf("%f",&a[i].sal);
	i++;
}
printf("\nDone Reading all Values. Now Showing data entered.\n");
i=0;
while(i<num){
printf("\nEmployee no. %d\n",a[i].id);	
printf("ID= %d\n",a[i].id);
printf("Age= %d\n",a[i].age);
printf("Name= ");
puts(a[i].name);
printf("Salary= %f\n",a[i].sal);
i++;
}
}
