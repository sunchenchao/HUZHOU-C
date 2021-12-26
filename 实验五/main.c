#include<stdio.h>
#include<math.h>
//函数的第(4)

//最小共倍数
int lcm(int m,int n){
	int max,i,all;
	all = m * n;
	if(m>n){
		max = m;
	}else{
		max = n;
	}
	for(i=max;i<=all;i++){
		if(i%m==0&&i%n==0){
			return i;
		}
	}
	return -1;
} 
//最大公约数 

int gcd(int m,int n){
	int min,i,all;
	if(m<n){
		min = m;
	}else{
		min = n;
	}
	for(i=min;i>=1;i--){
		if(m%i==0&&n%i==0){
			return i;
		}
	}
	return -1;
	
}
void pb4(){
	int m,n;
	printf("Enter m,n:");
	scanf("%d%d",&m,&n);
	printf("gcd=%d\n",gcd(m,n));
	printf("lcm=%d\n",lcm(m,n));
} 
//-----------------------

int isPrime(int num){
	int i;
	if(num<=1){
		return 0;
	}
	if(num==2){
		return 1;
	}
	for(i=2;i<=sqrt(num)+1;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;	
}
void pb5(){
	int n,m,i,sum=0;
	printf("Enter m,n:");
	scanf("%d%d",&n,&m);
	printf("Sum of(");
	for(i=n;i<=m;i++){
		if(isPrime(i)==1){
			sum+=i;
			printf("%d ",i);
		}	
	}
	printf("\b)=%d",sum);
	
}
//--------------------
//------------空心金字塔------------
void hollowpyramid(int n){
	int i,j;
	for(i=1;i<=n;i++){
		//输出空格 
		for(j=1;j<=n-i;j++){
			printf(" ");
		} 
		//输出数字
		for(j=1;j<=i*2-1;j++){
			if(j==1||j==i*2-1||i==n){
				printf("%d",i);	
			}else{
				printf(" ");		
			}
			
		} 
		putchar('\n');
		
	}
	
	
} 

int main(){
	//int  n;
	//printf("Enter n:");
	//scanf("%d",&n);
	//hollowpyramid(n);	
	pb4();
}