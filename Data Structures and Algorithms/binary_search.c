//Implementing binary search in ascending ordered array.
//Lab exam question.
#include<stdio.h>

struct node{
char name[10];
int id;
char grade[3];
};
int num;
struct node data[20];

void main(){
	printf("Enter number of nodes.\n");
	scanf("%d",&num);
	int i;
	for(i=0;i<num;i++){
		printf("\nEnter id: ");
		scanf("%d",&(data[i].id));
		printf("Enter Name: ");
		scanf("%s",data[i].name);
		printf("Enter Grade: ");
		scanf("%s",data[i].grade);
	}
	printf("\nAll students entered!");
	int search_id;
	printf("\nEnter id to search:");
	scanf("%d",&search_id);
	 int result = binarySearch(0, num-1, search_id);
   if(result == -1) {
	   printf("\nElement is not present in array.");
   }else{
	  printf("\nElement is present at index %d .\nDetails are-\n",result);
	  printf("%s	%s",data[result].name,data[result].grade);
   }             
}

int binarySearch(int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
		int n=data[mid].id;
        if (n == x)  
            return mid;
        if (n > x) 
            return binarySearch(l, mid-1, x);
		
        return binarySearch(mid+1, r, x);
   }
   return -1;
}