#include<stdio.h>
int main(){
	int e;
	float cost;
	printf("Enter e:");
	scanf("%d",&e);
	if(e<0){
		printf("Invalid Value");
		return 0;
	}
	if(e<=50){
		cost = e * 0.53;
	}else{
		cost = 50 * 0.53;
		cost = cost + (e-50)*0.58;
	}
	printf("cost :%.2f\n",cost);
	return 0;	
}