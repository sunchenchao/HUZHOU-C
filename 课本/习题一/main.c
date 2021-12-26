#include<stdio.h>
#include<math.h>
int main(void){
	problem3(7);
	


}

int problem2(void){
	int i,sum=0;
	for(i=0;i<=100;i++){
		if(i%6==0){
			printf("%d\n",i);
		}
		sum+= (i%6==0) ? i :0;
	}
	printf("%d",sum);
} 
// 判断是不是素数 
int problem3(int num){
	int i,flag = 1;
	if(num<=1){
		printf("不是");
	}
	for(i=2;i<=sqrt(num);i++){
		if(num%i==0){
			flag = 0;
			break;
		}
	}
	if(flag == 1){
		printf("shi");
	}else{
		printf("bushi");
	}	
}
