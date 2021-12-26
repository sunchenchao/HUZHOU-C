#include<stdio.h>
int train();
int test(); 
int main(void){
	//train();
	test();
	
}

// 作业本p24页 计算火车运行时间 
int train(){
	int time1,time2,pre,next;
	scanf("%d%d",&time1,&time2);
	//数据不合法跳出 
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
	//小数不允许整数输出 
	//整数不允许小数输出 
	//可以强制转换之后进行输出
	//总结 再scanf中 不会进行强制类型转化 但是
	//自己取执行就是可以去实现这个目的 数据是不会出现问题 
	double k=1.23;
	int kk=7;
	printf("%d",(int)k);
} 

