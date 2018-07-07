#include<stdio.h>
main(){
	typedef struct {
		char first_name[10];
		char middle_name[10];
		char last_name[10];
	}NAME;
typedef struct{
	int roll_no;
	NAME name;
	int class;
	int marks;
}STUDENT;
STUDENT student;
printf("Enter details of student.\nEnter roll no:");
scanf("%d",&student.roll_no);
printf("Enter first name, middle name and last name separated by spaces.\n");
scanf("%s %s %s",&student.name.first_name,&student.name.middle_name,&student.name.last_name);
printf("Enter class:");
scanf("%d",&student.class);
printf("Enter marks:");
scanf("%d",&student.marks);
//print the data
printf("Done getting data. Now displaying...\n");
printf("Roll no.: %d",student.roll_no);
printf("\nName: %s %s %s",student.name.first_name,student.name.middle_name, student.name.last_name);
printf("\nClass: %d",student.class);
printf("\nMarks: %d",student.marks);
}