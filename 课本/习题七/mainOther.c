#include<stdio.h>
#include<math.h>
#include<string.h>
int selectSort();
int test1(){
	char x[] = "abcdef",y[] ={
		'a','b','c','d','e','f' 
	};
	printf("%d %d",sizeof(x),sizeof(y));
	printf("%d",strcmp(x,y)); 
}
int main(){
	//selectSort();
	test1();
	
	
		
}

int selectSort(){
	int arr[7] ={
		1,9,12,55,12,1,89
	},i,j,indexMax,len=7,temp;
	for(i=0;i<len-1;i++){
		indexMax = i;
		for(j=i+1;j<len;j++){
			if(arr[indexMax]<arr[j]){
				indexMax =j;
			}		
		}
		if(indexMax!=i){
			temp = arr[indexMax];
			arr[indexMax] = arr[i];
			arr[i]= temp;
		}
	}
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}