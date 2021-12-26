#include<stdio.h>
char *strcat(char *s,char *t);
void pb1();
char *serch(char *s,char *t);
void pb2();
int main(void){
	char one[100]="abcdefg",two[100]="fg";
	scanf("%s",&one);
	scanf("%s",&two);
	if(serch(one,two)==NULL){
		printf("没有找到");
	}
	
}



//书本p118 第4题 字符串连接

void pb1(){
	char one[100], two[100];
	scanf("%s",&one);
	scanf("%s",&two);
	strcat(one,two);
	printf("%s",one);
}

char *strcat(char *s,char *t){
	int i=0,j=0;
	while(*(s+i)!='\0'){
		i++;
	}

	s[i++] = t[j++];
	while(t[j]!='\0'){
		s[i++] = t[j++];
	}
	s[i] = '\0';
	return s;
} 

//书本120 拓展编程题第一小题

void pb2(){
	
}

char *serch(char *s,char *t){
	int i=0,j=0,k=0,flag = 0;
	while(t[i]!='\0'){
		i++;
	}
	while(s[i+j-1]!='\0'){
		flag = 1;
		for(k=0;k<i;k++){
			if(s[j+k]!=t[k]){
				flag = 0;
				break;
			}		
		}
		if(flag==1){
			printf("%d",j+1);
			return s+i+j-1;
		}
		j++;
	}
	return NULL;
} 
 
 