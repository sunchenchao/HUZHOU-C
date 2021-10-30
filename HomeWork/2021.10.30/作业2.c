#include<stdio.h>
int main(void){
	int n,i,pre=1,next=2;
	double sum;
	printf("Enter n:");
	scanf("%d",&n);
	if(n<=0){
		printf("Invalid date");
		return 0;
	}
	for(i=1;i<=n;i++){
		sum +=  next*1.0 / pre;
		next = next ^ pre ;
		pre = next ^ pre;
		next = next ^ pre;
		next +=pre;
	}
	printf("S(%d)=%.3f",n,sum);
		
} 
