#include<stdio.h>
#include<string.h>
int pb1();
void pb2();
void strmcpy(char targett[],char source[],int n);
int main(void){
	pb2();

	
	
}


// ʵ��8 ��91ҳ  ѡ������
void selectSort(int arr[],int n){
	int i,j,maxIndex,temp;
	for(i=0;i<n-1;i++){
		maxIndex = i;
		for(j=i+1;j<n;j++){
			if(arr[maxIndex]>arr[j]){
				maxIndex = j;
			}
		} 
		if(maxIndex != i){
			temp = arr[maxIndex];
			arr[maxIndex] = arr[i];
			arr[i] = temp;
		}
	}
}

int pb1(){
	int arr[10],i,n;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selectSort(arr,n);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
} 

//�鱾��p96ҳ  ʹ�ú���ʵ���ַ����Ĳ��ָ���

void pb2(){
	char str[30],strCopy[30];
	int n;
	printf("Enter a string:");
	gets(str);
	printf("Enter a m:");
	scanf("%d",&n);
	//strcpy(strCopy,str+n);
	//printf("%s",strCopy);
	strmcpy(strCopy,str,n);
	printf("%s",strCopy);
	
} 
void strmcpy(char targett[],char source[],int n){
	int i=0;
	while(source[n++]){
		targett[i++] = source[n-1];
	}
	targett[i] = '\0';
	
}

