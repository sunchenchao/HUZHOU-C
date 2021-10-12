#include<stdio.h>
int main(){
	int n=152,digit1,digit2,digit3;
	digit1 = 152 % 10;
	digit2 = 152 /10 % 10;
	digit3 = 152 / 100;
	printf("%d=%d+%d*10+%d*100",n,digit1,digit2,digit3);
	return 0;
}