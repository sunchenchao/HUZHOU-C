#include<stdio.h>
int train();
int test(); 
int main(void){
	//train();
	test();
	
}

// ��ҵ��p24ҳ ���������ʱ�� 
int train(){
	int time1,time2,pre,next;
	scanf("%d%d",&time1,&time2);
	//���ݲ��Ϸ����� 
	if(time1%100>59 || time2%100>59||time1/100>23||time2/100>23){
		return 0; 
	}
	next = time1 % 100  - time2 % 100;
	pre = time1 / 100  - time2 / 100;
	if(next<0){
		printf("%02d%02d",pre - 1,60+next);
	}else{
		printf("%02d%02d",pre,next);	
	}
} 

int test(){
	//С��������������� 
	//����������С����� 
	//����ǿ��ת��֮��������
	//�ܽ� ��scanf�� �������ǿ������ת�� ����
	//�Լ�ȡִ�о��ǿ���ȥʵ�����Ŀ�� �����ǲ���������� 
	double k=1.23;
	int kk=7;
	printf("%d",(int)k);
} 

