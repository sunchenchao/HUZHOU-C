#include<stdio.h>
double calcPow(double x,int n);
void pb1();
void pb2();
int fact(int num);
int factsum(int num);
int main(){
	pb2();
	
	
}
//P111 递归函数实现幂次 
void pb1(){
	int x,n;
	printf("Enter x:");
	scanf("%d",&x); 
	printf("Enter n:");
	scanf("%d",&n); 
	printf("%.0f",calcPow(x,n));
}

double calcPow(double x,int n){
	if(n==1){
		return x;
	}
	return x * calcPow(x,n-1);
	
}

//递归求出阶乘的和
void pb2(){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Sum=%d",factsum(n));
	
} 

int fact(int num){
	if(num==1){
		return 1;
	}
	return num * fact(num-1);
} 
int factsum(int num){
	if(num==1){
		return 1;
	}
	return fact(num) + factsum(num-1);
} 