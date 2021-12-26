#include<stdio.h>
typedef struct fuNum{
	int shi;
	char type;
	int xu;
}fuNum;
int multiply();
int main(void){
	multiply();
	
}


//书本p102页 复数之积 
int multiply(){
	fuNum num1,num2;
	scanf("%d%c%di",&num1.shi,&num1.type,&num1.xu);
	scanf("%d%c%di",&num2.shi,&num2.type,&num2.xu);
	if(num1.type == '-')
	num1.xu = -num1.xu;
	if(num2.type == '-')
	num2.xu = -num2.xu;
	printf("%d%+di",num1.shi*num2.shi-num1.xu*num2.xu,num1.xu*num2.shi+num1.shi*num2.xu);
	
}