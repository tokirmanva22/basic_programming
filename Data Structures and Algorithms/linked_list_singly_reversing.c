//Creating a linked list and then reverse it.
// Lab exam question.
#include<stdio.h>
#include<stdlib.h>

 struct node{
	int id;
	struct node *ptr;
};
struct node *start;

void main(){
	int num;
	printf("Enter the number of nodes.\n");
	scanf("%d",&num);
	read(num);
	printll();
	reverse();
	printll();
}

void read(int num){
	struct node *pre;
	pre=(struct node *)malloc(sizeof(struct node));
	start=pre;
	printf("Enter ID:");
	scanf("%d",&(pre->id));
	int i;
	for(i=1;i<num;i++){
		struct node *curr=(struct node *)malloc(sizeof(struct node));
		printf("Enter ID:");
		scanf(" %d",&(curr->id));
		pre->ptr=curr;
		pre=curr;
	}
	pre->ptr=NULL;
}

void printll(){
	struct node *cur=start;
	printf("\nLinked list is-\n");
	while(cur!=NULL){
		printf("\n%d",cur->id);
		cur=cur->ptr;
	}
}

void reverse(){
	int arr[30];
	int i=-1;
	struct node *cur=start;
	while(cur!=NULL){
		i++;
		arr[i]=cur->id;
		cur=cur->ptr;
	}
	cur=start;
	while(cur!=NULL){
		cur->id=arr[i];
		cur=cur->ptr;
		i--;
	}
	printf("\nLinked list is reversed!");
}