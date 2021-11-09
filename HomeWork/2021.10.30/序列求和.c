#include<stdio.h>
// 题目：就是一个简单的求和答案就不看了 
int main(void){
	int m,n,i;
	double sum;
	printf("enter m n:");
	scanf("%d%d",&m,&n);
	if(m>n || m<=0){
		printf("Invalid data"); 
		return 0;
	}
	for(i=m;i<=n;i++){
		sum += i*i + 1.0/i;
	}
	printf("answer is %.6f",sum);
}