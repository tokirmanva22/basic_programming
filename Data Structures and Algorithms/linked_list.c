//1. Create a linked list for student details
#include<stdio.h>
#include<stdlib.h>

 struct node{
	char id[15];
	char name[20];
	struct node *ptr;
};
struct node *start;

main(){
	int num;
	printf("Enter the number of students.\n");
	scanf("%d",&num);
	read(num);
	printll(start);
}

void read(int num){
	struct node *pre;
	pre=(struct node *)malloc(sizeof(struct node));
	start=pre;
	printf("Enter ID:");
	scanf("%s",pre->id);
	printf("Enter Name:");
	scanf("%s",pre->name);
	int i;
	for(i=1;i<num;i++){
		struct node *curr=(struct node *)malloc(sizeof(struct node));
		printf("Enter ID:");
		scanf(" %s",curr->id);
		printf("Enter Name:");
		scanf(" %s",curr->name);
		pre->ptr=curr;
		pre=curr;
	}
	pre->ptr=NULL;
}

void printll(struct node *start){
	struct node *cur=start;
	int i=1;
	printf("\nEntered details are-\n");
	while(cur!=NULL){
		printf("\n%d. %s - %s",i++,cur->id,cur->name);
		cur=cur->ptr;
	}
}