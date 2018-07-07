//Create a singly linked list and delete all those sets of nodes which have sum=0;
//eg. If any two nodes are found to have theri sum=0 then delete both of them.
// Lab exam question.
#include<stdio.h>
#include<stdlib.h>

 struct node{
	int num;
	struct node *ptr;
};
struct node *start;

void main(){
	int num;
	printf("Enter the number of nodes.\n");
	scanf("%d",&num);
	read(num);
	printll();
	del_sum();
}

void read(int num){
	struct node *pre;
	pre=(struct node *)malloc(sizeof(struct node));
	start=pre;
	printf("Enter number: ");
	scanf("%d",&(pre->num));
	int i;
	for(i=1;i<num;i++){
		struct node *curr=(struct node *)malloc(sizeof(struct node));
		printf("Enter number: ");
		scanf(" %d",&(curr->num));
		pre->ptr=curr;
		pre=curr;
	}
	pre->ptr=NULL;
}

void printll(){
	struct node *cur=start;
	printf("\nLinked list is-\n");
	while(cur!=NULL){
		printf("\n%d",cur->num);
		cur=cur->ptr;
	}
}

void del_sum(){
	printf("\nDeleting all the nodes which have sum 0.");
	struct node *cur=start;
	int outer=-1;
	while(cur!=NULL){
		outer++;
		int n1=cur->num;
		struct node *cur2=cur->ptr;
		int inner=1;
		struct node *temp=cur2;
		while(cur2!=NULL){
			int secondpos=outer+inner;
			int n2=cur2->num;
			if(n1+n2 == 0){
				printf("\nSum found 0.");
				delete(outer);
				delete(secondpos-1);
				break;
			}
			inner++;
		}
		cur=temp;
	}
	printll();
}

void delete(int pos){
	pos=pos+1;
	struct node *cur=start,*pre=start;
	int count;
	if(pos==1){
		start=start->ptr;
		free(cur);
	}else{
		for(count=0;count<pos-1;count++){
		pre=cur;
		cur=cur->ptr;
		}
		pre->ptr=cur->ptr;
		free(cur);
	}
	printf("\nDeleted position: %d.",pos);
}