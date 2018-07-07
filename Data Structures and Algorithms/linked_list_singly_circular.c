//Creation,Insertion,deletion,Searching,Printing operations on singly circular linked list.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct node{
	char id[15];
	char name[20];
	struct node *ptr;
};
struct node *start,*last;
int num;

main(){
	int choice=0,pos;
	char sID[15];
	printf("Enter the number of students.\n");
	scanf("%d",&num);
	read(num);
	printll(start);
	printf("\nEnter command-\n1 insert at position.\n2- delete from position.\n3- Search\n0- Exit\n");
	scanf("%d",&choice);
	while(choice!=0){
		switch(choice){
			case 1 : printf("Enter position where to insert -");
					 scanf("%d",&pos);
					 insert(pos);
					 break;
			case 2 : printf("Enter position to delete- ");
					 scanf("%d",&pos);
					 delete(pos);
					 break;
			case 3 : printf("Enter  id to search- ");
					 scanf("%s",&sID);
					 search(sID);
					 break;
			default : exit(0);
		}
		printf("\nEnter command -\n1- insert at position.\n2- delete from position.\n3- Search\n0- Exit\n");
		scanf("%d",&choice);
	}
}

void read(int num){
	struct node *pre;
	pre=(struct node *)malloc(sizeof(struct node));
	start=pre;
	printf("Enter ID:");
	scanf("%s",pre->id);
	printf("Enter Name:");
	scanf("%s",pre->name);
	fflush(stdin);
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
	pre->ptr=start;
	last=pre;
}

void printll(){
	struct node *cur=start;
	int i=1;
	printf("\nEntered details are-");
	printf("\n%d. %s - %s",i++,cur->id,cur->name);
	cur=cur->ptr;
	while(cur!=start){
		printf("\n%d. %s - %s",i++,cur->id,cur->name);
		cur=cur->ptr;
	}
}

void insert(int pos){
	struct node *cur=start;
	int count;
	if(pos>num){
		printf("Entered position is not present in the list.\n");
		return;
	}
	struct node *new=(struct node*)malloc(sizeof(struct node));
	printf("Enter ID:");
	scanf(" %s",new->id);
	printf("Enter Name:");
	scanf(" %s",new->name);
	if(pos==1){
		new->ptr=start;
		start=new;
		last->ptr=start;
	}else{
		for(count=0;count<pos-2;count++){
		cur=cur->ptr;
	}
	new->ptr=cur->ptr;
	cur->ptr=new;
	}
	printll();
}

void delete(int pos){
	struct node *cur=start,*pre=start;
	int count;
	if(pos>num){
		printf("Entered position is not present in the list.\n");
		return;
	}
	if(pos==1){
		start=start->ptr;
		free(cur);
		last->ptr=start;
	}else{
		for(count=0;count<pos-1;count++){
		pre=cur;
		cur=cur->ptr;
		}
		pre->ptr=cur->ptr;
		free(cur);
	}
	printll();
}

void search(char sID[15]){
	struct node *cur=start;
	int i=1;
	if(strcmp(sID,cur->id)==0){
			printf("Entered value was found at position- %d with Name- %s",i,cur->name);
			return;
		}
		cur=cur->ptr;
		i++;
	while(cur!=start){
		if(strcmp(sID,cur->id)==0){
			printf("Entered value was found at position- %d with Name- %s",i,cur->name);
			break;
		}
		cur=cur->ptr;
		i++;
	}
	if(cur==start){
		printf("Entered value was not found.\n");
	}
}