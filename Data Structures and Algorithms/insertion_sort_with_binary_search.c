//Implement insertion sort using binary search.
//Using arrays
#include<stdio.h>
int num;
int arr[25];
void main(){
	printf("Enter number of elements.\n");
	scanf("%d",&num);
	read();
	printf("Reading done.\nEntered Array is-\n");
	printarr();
	sort();
	printf("\nSorted Array is-\n");
	printarr();
}

void sort(){
	int i=0;
	for(i;i<num;i++){
		int current_num=arr[i];
		int loc=binary_search(0,i,current_num);
		insert(loc,i);
		printf("\nArray after Pass- %d is-\n",i);
		printarr();
	}
	
}

int binary_search(int l,int r,int x){
	 if (r > l)
   {
        int mid = l + (r - l)/2;
		int n=arr[mid];
        if (n == x)  
            return mid;
        if (n > x) 
            return binary_search(l, mid-1, x);
		
        return binary_search(mid+1, r, x);
   }
	//check if only one node is left or not
		if(l==r){
			if(arr[l]<x){
				return l+1;
			}else if(arr[l]>x){
				int a=l-1;
				if(a<0) return 0;
				else return l-1;
			}else return l;
		
		}
		
}

void insert(int loc,int i){
	int value=arr[i];
	i=i-1;
	for(i;i>=loc;i--){
		arr[i+1]=arr[i];
	}
	arr[loc]=value;
}

void read(){
	int i=0;
	for(i;i<num;i++){
		printf("\nValue[%d]=",i+1);
		scanf("%d",&arr[i]);
	}
}

void printarr(){
	int i=0;
	for(i;i<num;i++){
		printf("%d, ",arr[i]);
	}
}
