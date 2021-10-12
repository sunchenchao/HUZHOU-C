#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("Enter number:");
	scanf("%d",&number);
	if(number<100 || number>999){
		printf("Invalid Value\n");
		return 0;
	}
	int sum,num1,num2,num3;
	num1 = number % 10;
	num2 = number / 10 %10;
	num3 = number / 100;
	sum = pow(num1,3)+ pow(num2,3)+ pow(num3,3);
	if(sum==number){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}