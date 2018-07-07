#include<stdio.h>
main(){
struct Employee{
	int emp_id;
	char name[20];
	int salary;
	char designation[20];
	int experience;
};
printf("Size of Structure Employee is %d",sizeof(struct Employee));

}