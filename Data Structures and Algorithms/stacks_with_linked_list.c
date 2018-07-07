//Implement stack using linked list.
//Push,Pop,Print,Create and Search operations.
#include<stdio.h>

struct node{
	int value;
	struct node *ptr;
};
struct node *top=NULL,*last=NULL;

main(){
	int option;
	printf("\nEnter your operation.\n1- Push\n2-Pop\n3-Peek\n4-Print\n5-Search\n");
	scanf("%d",&option);
	while(option!=0){
	switch(option){
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: peek();
		break;
		case 4: print();
		break;
		case 5: search();
		break;
		default: exit(0);
	}
	printf("\nEnter your operation.\n1- Push\n2-Pop\n3-Peek\n4-Print\n5-Search\n");
	scanf("%d",&option);
	}
}

void print(){
	struct node *cur=top;
	if(top==NULL){
		printf("Underflow! Stack is empty!\n");
		return;
	}
	int i=1;
	printf("\nEntered details are-");
	while(cur!=last){
		printf("\n%d",cur->value);
		cur=cur->ptr;
	}
	printf("\n%d",cur->value);
}

void push(){
	struct node *new=(struct node*)malloc(sizeof(struct node));
	printf("Enter number to push: ");
	scanf("%d",&(new->value));
	if(last==NULL){
		last=new;
	}
	new->ptr=top;
	top=new;
	printf("Entered element pushed!\n");
}

void pop(){
	if(top==NULL){
		printf("Underflow! Stack is empty!\n");
		return;
	}
	struct node *curr=top;
	top=top->ptr;
	free(curr);
	printf("Entered element popped!\n");
}

void peek(){
	if(top==NULL){
		printf("Underflow! Stack is empty!\n");
		return;
	}
	printf("Top entry is : %d\n",top->value);
}

void search(){
	if(top==NULL){
		printf("Underflow! Stack is empty!\n");
		return;
	}
	printf("Enter value to be searched.\n");
	int data,i=0;
	scanf("%d",&data);
	struct node *cur=top;
	while(cur!=last){
		if(cur->value ==data){
			printf("Value found at position: %d",i+1);
			return;
		}
		i++;
		cur=cur->ptr;
	}
	if(cur->value==data){
		printf("Value found at position: %d",i+1);
	}else{
		printf("Value not found!");
	}
}
