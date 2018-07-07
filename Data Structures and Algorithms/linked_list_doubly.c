//Creation,Insertion,deletion,Searching,Printing operations on doubly linked list.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct node{
	char id[15];
	char name[20];
	struct node *prev;
	struct node *next;
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
	pre->prev=NULL;
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
		curr->prev=pre;
		pre->next=curr;
		pre=curr;
	}
	pre->next=start;
	start->prev=pre;
	last=pre;
}

void printll(){
	struct node *cur=start;
	if(cur==NULL){
		printf("List is empty!\n");
		return;
	}
	int i=1;
	printf("\nLinked List contains-");
	printf("\n%d. %s - %s",i++,cur->id,cur->name);
	cur=cur->next;
	while(cur!=start){
		printf("\n%d. %s - %s",i++,cur->id,cur->name);
		cur=cur->next;
	}
}

void insert(int pos){
	struct node *cur=start;
	int count;
	if(pos>(num+1)){
		printf("Entered position is not present in the list.\n");
		return;
	}
	struct node *new=(struct node*)malloc(sizeof(struct node));
	printf("Enter ID:");
	scanf(" %s",new->id);
	printf("Enter Name:");
	scanf(" %s",new->name);
	if(pos==1){
		if(num==0){
			start=new;
			last=new;
		}
		new->next=start;
		new->prev=last;
		start->prev=new;
		start=new;
		last->next=start;
	}else{
		for(count=0;count<pos-2;count++){
		cur=cur->next;
	}
	new->next=cur->next;
	new->prev=cur;
	cur->next=new;
	cur=new->next;
	cur->prev=new;
	if(pos==(num+1)){
		last=new;
	}
	}
	num++;
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
		start=start->next;
		start->prev=last;
		last->next=start;
		if(num==1){
			start=NULL;
			last=NULL;
		}
		free(cur);
	}else{
		for(count=0;count<pos-1;count++){
		pre=cur;
		cur=cur->next;
		}
		pre->next=cur->next;
		free(cur);
		cur=pre->next;
		cur->prev=pre;
	}
	num--;
	printll();
}

void search(char sID[15]){
	struct node *cur=start;
	int i=1;
	if(strcmp(sID,cur->id)==0){
			printf("Entered value was found at position- %d with Name- %s",i,cur->name);
			return;
		}
		cur=cur->next;
		i++;
	while(cur!=start){
		if(strcmp(sID,cur->id)==0){
			printf("Entered value was found at position- %d with Name- %s",i,cur->name);
			break;
		}
		cur=cur->next;
		i++;
	}
	if(cur==start){
		printf("Entered value was not found.\n");
	}
}