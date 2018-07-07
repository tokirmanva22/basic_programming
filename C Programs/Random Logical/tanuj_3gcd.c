#include <stdio.h>

int gcd(int x,int y){
	int rem=x%y;
	if(rem==0){
	 return y;
	}else{
  return (gcd(y,rem));
	}
	
}

 int main(void)
 {
 	printf("Enter a positive integer!\n");
 	int num;
 	scanf("%d",&num);
        
 	if((num%2==0)&&(num>0)){
 		printf("Enter two numbers to find gcd.\n");
 		int a,b,g;
 		scanf("%d %d",&a,&b);
 		if(b>a){
 			int t=a;
 			a=b;
 			b=t;
 		}
 		g=gcd(a,b);
 		printf("GCD of given numbers is %d\n",g);
 		
 	}else{
 		printf("Good Bye!You entered odd number or negative value or some invalid value.\n");
 	}
 	
 	
 	return 0;
 }
