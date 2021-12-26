#include<stdio.h>
#include<math.h>
int pb17(double num);
int pb28(int n);
int pbb3();
double pbb5(int num);
int main(void){
	//pb17(1.0);
	//pb28(3);
	//pbb3();
	double sum = 0,temp1;
	sum = pbb5(3.0);
	temp1 = 1+sqrt(2)+sqrt(3);
	
	printf("%f%f",sum,temp1);
	
}

int pb17(double num){
	 double sum =0;
	if(num < 0){
		sum = pow(num+1,2)+ 2 * num + 1/num;
	}else{
		sum = sqrt(num);
	}
	printf("sum=%f",sum);
}
int pb28(int n){
	double i,sum=0,base1=1,flag = 1;
	for(i=1;i<=n;i++){
		sum+=1/(base1*flag);
		base1 =base1+ 2;
		flag = -flag;
	}
	printf("%f",sum);
}

//课本上的课后练习

int pbb3(){
	int n,m,i,flag;
	double sum=0;
	scanf("%d%d",&m,&n);
	
	for(i=m;i<=n;i++){
		sum += i*i + 1.0/i;
	}
	printf("%f",sum);	
} 
//使用递归函数来得到平方根求和 
double pbb5(int num){
	if(num == 1){
		return 1;
	}
	return sqrt(num) + pbb5(num-1);
}