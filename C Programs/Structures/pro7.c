#include<stdio.h>
main(){
typedef struct{
	int emp_id;
	float salary;
	int experience;
}EMP;
EMP employee;
EMP *ptr=&employee;
ptr -> emp_id=01;
ptr -> salary=4535.25;
ptr -> experience=5;
printf("Details of Employee is-\nEmployee ID: %d\nSalary: %f\nYears of Experience: %d",employee.emp_id,employee.salary,employee.experience);
}