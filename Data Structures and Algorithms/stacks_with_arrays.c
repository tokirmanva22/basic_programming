//Implement stack using arrays.
//Push,Pop,Print,Create and Search operations
#include<stdio.h>

int top=-1;
int arr[20];
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

void push(){
	int num;
	if(top==(20-1)){
		printf("Overflow! Stack is full!");
		return;
	}
	printf("Enter number to push: ");
	scanf("%d",&num);
	top++;
	arr[top]=num;
	printf("One element pushed!\n");
}

void pop(){
	if(top==-1){
		printf("Underflow! Stack is empty!\n");
		return;
	}
	top--;
	printf("One element popped!\n");
}

void peek(){
	if(top==-1){
		printf("Underflow! Stack is empty!\n");
		return;
	}
	printf("Top element is arr[%d]= %d",top,arr[top]);
}

void print(){
	int i;
	if(top==-1){
		printf("Underflow! Stack is empty!\n");
		return;
	}
	printf("Stack contains-\n");
	for(i=top;i>=0;i--){
		printf("%d\n",arr[i]);
	}
}

void search(){
	int i,data;
	printf("Enter number to search.\n");
	scanf("%d",&data);
	for(i=0;i<=top;i++){
		if(arr[i]==data){
			printf("Entered value found at %dth position.\n",i+1);
			return;
		}
	}
	printf("Entered value not found!\n");
}