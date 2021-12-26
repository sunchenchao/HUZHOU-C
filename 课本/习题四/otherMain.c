#include<stdio.h>
#include<math.h>
int reverse(int num);
int isS(int num);
int pb7();
int x=0,y=1;
int main(void){
	//reverse(123456);
	//pb9();
	//printf("%d%d",x,y);
	printf("\111");
} 

int reverse(int num){
	while(num!=0){
		printf("%d",num%10);
		num = num /10;
	}	
} 

//判断是不是素数
int isS(int num){
	int i,flagg=1;

	if(num<=1){
		printf("No");
		return 0;
	}
	if(num==2){
		printf("Yes");
		return 0;
	}
	for(i=2;i<=sqrt(num)+1;i++){
		if(num%i==0){
			flagg = 0;
			break;
		}
	}
	if(flagg==1){
		printf("Yes"); 
	}else{
		printf("No");
	}	
} 

// 最大公约数最小共倍数 

int pb7(){
	int a,b,i,max,min,all;
	scanf("%d%d",&a,&b);
	//公约数
	if(a>b){
		max = a;
		min =b;
	}else{
		max = b;
		min =a;
	}
	for(i=min/2;i>=1;i--){
		if(a%i==0&&b%i==0){
			printf("%d\n",i);
			break;
		}
	}
	all = a*b;
	for(i=max;i<=all;i++){
		if(i%a==0&&i%b==0){
			printf("%d\n",i);
			break;
		}
	} 
}

int pb9(){
	int i,j,num;
	scanf("%d",&num);
	for(i=1;i<num;i=i+2){
		//输出空格
		for(j=1;j<=num-i;j++){
			printf(" ");
		} 
		for(j=1;j<=i;j++){
			printf("* ");
		}
		putchar('\n');
	}
	for(i=7;i>=1;i=i-2){
		//输出空格
		for(j=1;j<=num-i;j++){
			printf(" ");
		} 
		for(j=1;j<=i;j++){
			printf("* ");
		}
		putchar('\n');
	}
}