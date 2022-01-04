#include<stdio.h>
#include<math.h>
void bubbleSort();
void selectSort();
void towFind();
void isSuShu(int n);
void erwei();
void getString();
void pdtower();
void zzxcf();
void twoPoint();
int zzxcfdg(int a,int b);
int digui(int num);
int revere(int a,int num );
//指针间的交换  形参的值的交换并不会影响外部的值
//只有去修改指针指向的内容的时候才是会改变外部的值
//前面数组也是同理  你用方法去改变数组的值 并不是去改变
//地址 而是去改变里面的内容 
void pointChange(int *a,int *b){
	printf("%d %d\n",a,b);
	int *pt;
	pt = a;
	a = b;
	b = pt;
	printf("%d %d\n",a,b);
} 

int main(){
	//bubbleSort();
	//selectSort();
	//towFind();
	//isSuShu(7);
	//int a=5,b=7;
	//int *aa=&a,*bb=&b;
	//printf("-%d %d\n",aa,bb);
	//pointChange(aa,bb);
	//printf("-%d %d\n",aa,bb);
	//*p 代表的是这个指针指向地址的内容的值 
	//printf("%d %d",*aa,*bb);
	//erwei();
	//getString();
	//pdtower();
	//zzxcf();
	//twoPoint();
	
	//printf("%d",digui(3));
	
	//printf("%d",zzxcfdg(99,99));	
	printf("%d",revere(12345,4));	
	
} 

void bubbleSort(){
	int arr[]={
	9,9,9,3,6,235,898,4	
	},i,j,temp,n=8;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}  
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void selectSort(){
	int arr[]={
	9,9,9,3,6,235,898,4	
	},i,j,temp,n=8,maxIndex;
	for(i=0;i<n-1;i++){
		maxIndex = i;
		for(j=i+1;j<n;j++){
			if(arr[maxIndex]>arr[j]){
				maxIndex = j;
			}
			
		}
		if(maxIndex	!= i){
			temp = arr[i];
			arr[i] = arr[maxIndex];
			arr[maxIndex] = temp; 
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void towFind(){
	int arr[]={
	3,4,6,9,9,9,235,898	
	},low=0,height=7,mid,n=99;
	
	while(low<=height){
		mid = (low + height)/2;
		if(arr[mid] == n){
			break;
		}else if(arr[mid]>n){
			height= mid - 1;
		}else{
			low = mid +1;
		}
	}
	if(low<=height){
		printf("%d %d",mid,arr[mid]);
	}else{
		printf("not found");
	}	
}

//判断是不是素数

void isSuShu(int n){
	int i,flag = 0;
	if(n==1){
		printf("No");
		return;
	}
	if(n==2){
		printf("Yes");
		return;
	}
	for(i=2;i<=sqrt(n)+1;i++){
		if(n%i==0){
			flag = 1;
			break;
		}
	}
	if(flag==0){
		printf("Yes");
	}else{
		printf("No");
	}	
} 
//二维数组的旋转
//上三角
//下三角
void erwei(){
	//如果进行了二维数组的初始化那么就是
	//可以不用声明前一个的变量  后一个变量必须声明 
	int arr[5][5]={
		1,2,3,4,5,
		6,7,8,9,10,
		11,12,13,14,15,
		16,17,18,19,20,
		21,22,23,24,25 
	};
	int i,j,temp;
	//进行转置 
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			// i<=j 这个是上三角 
			if(i>=j){//这个是下三角 
				printf("%02d ",arr[i][j]);
				//这边就是很简单了就是i和j的位置互换的
				//两个变量之间进行交换
				//交换完成就是可以解决这个问题 
			}else{
				printf("00 ");
			}
		}
		putchar('\n');
	}
} 

//读取指定结尾的字符串
void getString(){
	char str[100],ch;
	int i=0;
	while((ch = getchar())!='9'){
		str[i] = ch;
		i++;
	}
	str[i]='\0';
	printf("%s",str);	
} 

//输出镂空的上下金字塔
void pdtower(){
	int n,i,j,k;
	scanf("%d",&n);
	//上金字塔
	for(i=1;i<=n;i++){
		//空格
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++){
			if(j==1||j==i*2-1){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		putchar('\n');
	} 
	for(i=n-1;i>=1;i--){
		//空格
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++){
			if(j==1||j==i*2-1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		putchar('\n');
	} 
}

//辗转相除法
void zzxcf(){
	int a,b,c;
	scanf("%d %d",&a,&b);
	while(a%b!=0){
		c = a%b; 
		a = b;
		b = c;
	} 
	printf("%d",b);
} 
//数组和二级指针
void twoPoint(){
	char str[3][5] = {
		"comd",
		"king",
		"whoe"
	};
	printf("%s\n",*str);//str[0][0]
	printf("%s\n",*str+1);//str[0][1]
	printf("%s\n",*(str+1));//str[0][1]
	printf("%s\n",*(str+1)+1);
	//在没有括号的情况下是先做*取内容然后再做+1  
	//如果要是取单个字符那么就是需要去再取出一个*号
	//二维数组 一个*就是取出整个字符串 
	//**就是取出一个字符 
} 

//递归题目
//阶乘递归
int digui(int num) {
	if(num==1){
		return 1;
	}
	return num * digui(num - 1);
}
//辗转相除法的递归
int zzxcfdg(int a,int b){
	if(a%b==0){
		return b;
	}
	return zzxcfdg(b,a%b);
} 
//递归数字反转
int revere(int a,int num){
	
	if(a/10==0){
		return a;
	}
	
	return  a%10*pow(10,num)+revere(a/10,num-1);  
} 

