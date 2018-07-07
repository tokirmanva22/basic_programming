#include<stdio.h>
main(){
struct dist{
float km;
float met;
}a,b,sum,diff;
//read
printf("Enter distances in KMs and Metres separated by space\nDistance 1: ");
scanf("%f %f",&a.km,&a.met);
printf("Distance 2:");
scanf("%f %f",&b.km,&b.met);
//sum
sum.km=a.km + b.km;
float me;
me=a.met + b.met;
while(me>=1000.0){
sum.km++;
me-=1000;
}
sum.met=me;
//difference
float kl=a.km;
float metr=a.met;
if(a.met < b.met){
kl--;
metr+=1000;
}
diff.km=kl - b.km;
me=metr - b.met;
while(me>=1000.0){
	 diff.km++;
	 me-=1000;
}
diff.met=me;
printf("You Entered:\nDistance:1 KMs: %f, Metres: %f\nDistance:2 KMs: %f, Metres: %f\nSum of Distances is: %f KMs, %f Metres\nDifference of Distances is: %f KMs, %f Metres\n",a.km,a.met,b.km,b.met,sum.km,sum.met,diff.km,diff.met);
}