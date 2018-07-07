#include<stdio.h>
main(){
struct st{
	int id;
	int age;
	char name[50];
	float sal;
}a;
printf("\nEnter Employee Details\n");
	printf("ID=");
	scanf("%d",&a.id);
    printf("Age=");
	scanf("%d",&a.age);
	printf("Name=");
	fflush(stdin);
	gets(a.name);
	printf("Salary=");
	scanf("%f",&a.sal);
	
	printf("\nDone Reading all Values. Now Showing data entered.\n");
printf("ID= %d\n",a.id);
printf("Age= %d\n",a.age);
printf("Name= ");
puts(a.name);
printf("Salary= %f\n",a.sal);

}