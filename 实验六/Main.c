#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h> 
int isFlower(int num);
int main(void){
	pb1();
	
	
}

//ʵ����ˮ�ɻ��� 
int pb1(){
	int m,n,i,flag;
	printf("Enter m,n:");
	scanf("%d%d",&m,&n);
	if(m>n||m<100||n>10000){
		printf("���ݲ��Ϸ�\n");
	}
	for(i=m;i<=n;i++){
		flag = isFlower(i);
		if(flag){
			printf("%d\n",i);
		}
	}
	
}

int isFlower(int num){
	double sum=0;
	int temp = num,numBit = 1,i,num2=num;
	while(temp = temp /10){
		numBit++;
	}
	for(i=0;i<numBit;i++){
		temp = num % 10;
		sum+=pow(temp,numBit);
		num = num / 10;//��������������� ������ݵ�ֵ����ı��� 
	}
	if(fabs(sum-num2)<=0.000001 ){
		return 1;
	}else{
		return 0;
	}
}