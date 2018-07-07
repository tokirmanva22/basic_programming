//Finding the pair of points with minimum distance between them.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int num,a1,b1,a2,b2,dist=99999;
struct points{
	int x;
	int y;
};

void main(){
	printf("Enter number of points.\n");
	scanf("%d",&num);
	struct points *base=(struct points *)malloc(num*sizeof(struct points));
	struct points *point=base;
	read(point);
	printf("Entered points are-\n");
	printpoints(point);
	findpair(point);
	printf("\nPoints with minimum distance are,(%d, %d) and (%d, %d) with distance=%d.",a1,b1,a2,b2,dist);
}

void read(struct points *point){
	int i=0;
	for(i;i<num;i++,point++){
		printf("Point[%d]=",i);
		scanf("%d %d",&point->x,&point->y);
	}
}

void printpoints(struct points *point){
	int i=0;
	for(i;i<num;i++,point++){
		printf("\nPoint[%d]= X:%d, Y:%d",i,point->x,point->y);
	}
}

void findpair(struct points *point){
	int i=0;
	struct points *base=point;
	for(i;i<num;i++,point++){
		int j=0;
		struct points *point2=base;
		for(j;j<num;j++,point2++){
			if(i==j){
			}else{
				int d=sqrt(pow(point->x - point2->x,2)+pow(point->y - point2->y,2));
				if(d<dist){
					dist=d;
					a1=point->x;
					a2=point2->x;
					b1=point->y;
					b2=point2->y;
				}
			}
		}
	}
}