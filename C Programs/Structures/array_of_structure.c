#include<stdio.h>
typedef struct{
	int roll_no;
	char name[25];
	char fathers_name[25];
	int fees;
}STUDENT;
STUDENT student[50];

void read(int num){
	int i;
	for(i=0;i<num;i++){
printf("\nEnter details of student %d -\nRoll No:",i+1);
scanf("%d",&student[i].roll_no);
printf("Student's Name:\n");
fflush(stdin);
gets(student[i].name);
printf("Father's Name:\n");
fflush(stdin);
gets(student[i].fathers_name);
printf("Fees:");
scanf("%d",&student[i].fees);
}
}

void display(int num){
printf("\nDone getting data. Now displaying...\n");
int i;
for(i=0;i<num;i++){
printf("\nDetails of student %d\n",i+1);
printf("Roll no.: %d",student[i].roll_no);
printf("\nName: ");
puts(student[i].name);
printf("Father's Name: ");
puts(student[i].fathers_name);
printf("Fees: %d\n",student[i].fees);
}
printf("\nEnd of list");
}

main(){
int num,i;
printf("Enter number of students in class:");
scanf("%d",&num);
//get the data
read(num);
//print the data
display(num);
printf("\nEnter the serial number of student whose details is to be edited: ");
scanf("%d",&i);
i--;
//edit details
printf("\nEnter new details of student %d -\nRoll No:",i+1);
scanf("%d",&student[i].roll_no);
printf("Student's Name:\n");
fflush(stdin);
gets(student[i].name);
printf("Father's Name:\n");
fflush(stdin);
gets(student[i].fathers_name);
printf("Fees:");
scanf("%d",&student[i].fees);
//print updated details
display(num);
}