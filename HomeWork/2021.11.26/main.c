#include<stdio.h>
#include<math.h> 
double fx(double x);
int main(void){
	double x,ans;
	printf("x\ty\n");
	for(x = -1 ; x<=1 ; x+=0.1){
		ans = fx(x);
		if(fabs(x)<=1e-6){
		printf("%.0f\t%.2f\n",fabs(x),ans);
		}else if(fabs(fabs(x)-1)<=1e-6){
		printf("%.0f\t%.2f\n",x,ans);	
		}else printf("%.1f\t%.2f\n",x,ans);
	}
	return 0;
}
double fx(double x){
	return (x + 1) * ( x + 1 );
}