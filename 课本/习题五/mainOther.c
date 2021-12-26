#include<stdio.h>
int main(){
	//自定义字符串读入	
	char str[100],temp;
	int len=0;
	while((temp=getchar())!='8'){
		str[len++] = temp;
	}
	str[len] = '\0';
	printf("%s",str);
}


 