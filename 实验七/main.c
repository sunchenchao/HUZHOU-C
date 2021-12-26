#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
# define MAXN 10
int PBinsert(){
	int i,index,j,n,x;
	int a[MAXN];
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter%d interges:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	printf("Enter x:");
	scanf("%d",&x);
	for(i=0;i<n;i++){ 
		if(x<a[i]){
			break;
		}
	}
	index = i--; //错误之处 
	for(j=n;j>=index;j--){// 错误之处 
		a[j]=a[j-1];
	}
	a[index] = x;
	for(i=0;i<=n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
//交换+最大最小 
int P72P1and2(void){
	int max,min,n,i,maxIndex=0,minIndex=0,arr[10];
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d intergers:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(i==0){
			max=arr[i];
			min =arr[i];
		}else{
			if(max<arr[i]){
				max = arr[i];
				maxIndex = i; 
			}
			if(min>arr[i]){
				min = arr[i];
				minIndex = i;	
			}
		}
	}
	if(min!=max){
		arr[maxIndex] = arr[maxIndex]^arr[minIndex];
		arr[minIndex] = arr[maxIndex]^ arr[minIndex];
		arr[maxIndex] = arr[maxIndex]^arr[minIndex];
	}
	printf("max:%d,min:%d\n",max,min);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}	
}

//选择排序 
void selectSort(int arr1[],int n){
	int i,j,maxIndex;
	for(i=0;i<n-1;i++){
		maxIndex=i;
		for(j=i;j<n;j++){
			if(arr1[maxIndex]<arr1[j]){
				maxIndex = j;
			}		
		}
		if(i!=maxIndex){
			arr1[maxIndex]=arr1[maxIndex]^arr1[i];
			arr1[i]=arr1[maxIndex]^arr1[i];
			arr1[maxIndex]=arr1[maxIndex]^arr1[i];
		}
	}
} 
//P74 拓展编程题
//判断是否是在里面存在重复 如果不存在重复 返回1 
//存在重复就是返回0 
int isIn(int num,int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		if(num==arr[i]){
			return 0;
		}
	}
	return 1;
}
//一句话求你细心一点  求你！！！！！！！！ 
int PB4(void){
	int arr1[10],arr2[10],n,m,i,j,store[20],storeI=0,maxIndex=0,flag=0,tt;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d intergers:",n);
	for(i=0;i<n;i++){
	 	scanf("%d",&arr1[i]);	
	}
	printf("Enter m:");
	scanf("%d",&m);
	printf("Enter %d intergers:",m);
	for(i=0;i<m;i++){
	 	scanf("%d",&arr2[i]);	
	}
	//-------------------------------
	for(i=0;i<n;i++){
		flag=1;
		for(j=0;j<m;j++){
			if(arr1[i]==arr2[j]){
				flag = 0;
				break;
			}	
		}
		if(flag==1){
			tt =isIn(arr1[i],store,storeI);
			if(tt==1){
			store[storeI] = arr1[i];
			storeI++;
			}			
		}
	}
	//--------
	for(i=0;i<m;i++){
		flag=1;
		for(j=0;j<n;j++){
			if(arr2[i]==arr1[j]){
				flag = 0;
				break;
			}	
		}
		if(flag==1){
			tt =isIn(arr2[i],store,storeI);
			if(tt==1){
			store[storeI] = arr2[i];
			storeI++;
			}			
		}
	}
	for(i=0;i<storeI;i++){
		printf("%d ",store[i]);
	}
}
//求一个整数中出现次数最多数
void findMostNum(){
	int n,arr[100],i,tongji[100],ps=0,max,maxps;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d intergers:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selectSort(arr,n);
	tongji[0]=1;
	for(i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			tongji[ps]++;
		}else{
			ps++;
			tongji[ps]=1;
		}
	}
	maxps = 0;
	for(i=1;i<=ps;i++){
		if(tongji[maxps]<tongji[i]){
			maxps=i;
		}
	}
	max = 0;
	for(i=0;i<=maxps;i++){
		max+=tongji[i];
	}
	printf("%d %d",arr[max-1],tongji[maxps]);
} 
 
 //二维数组题目
 
 //基础编程题1
 void juzheng(){
 	int n,arr[10][10],i,j,sum=0;
 	printf("Enter n:");
 	scanf("%d",&n);
 	for(i=0;i<n;i++){
	 	for(j=0;j<n;j++){
	 		scanf("%d",&arr[i][j]);
	 	}
	 }
	 //	全部的数据 
	 for(i=0;i<n;i++){
	 	for(j=0;j<n;j++)
	 		sum+=arr[i][j];
 	} 
 	printf("sum=%d\n",sum);
 	//减去对角线 和角上的两次 
	 for(i=0;i<n;i++){
	 	if(i!=0&&i!=n-1){
	 		sum-=arr[i][n-1-i];
	 	}	
 	} 
 	printf("sum=%d\n",sum);
 	//减去最后一行
	for(i=0;i<n;i++){
		sum-=arr[n-1][i];	 		
 	}  
 	printf("sum=%d\n",sum);
	 //减去最后一列 
	for(i=0;i<n;i++){
		sum-=arr[i][n-1];	 		
 	}  
 	sum+=arr[n-1][n-1];  
 	printf("sum=%d\n",sum);
 } 
 
 // 矩阵改错题
 
 void juzhengaicuo(){
 	int i,j,m,n;
 	int a[6][6],b[6][6];
 	scanf("%d%d",&m,&n);
 } 
  
 
  //字符串找查指定字符
void findChar(){
	char str[81],ch,tempp,len=0;
	int i=0,flag=0;
	printf("Eneter e character:");
	ch = getchar();
	getchar();
	printf("Eneter e strings:");
	while((tempp=getchar())!='\n'){
		str[len] = tempp;
		len++;
	}
	str[len] ='\0';
	for(i=0;i<len;i++){
		if(str[i]==ch){
			flag = 1;
			break;
		}
	}
	if(flag==1){
		printf("%d",i+1);	
	}else{
		printf("not Found!");
	}
} 
//字符串转换为十进制整数
 
void change(){
	int len=0,i,sum=0;
	char str[200],tempp,nstr[200],nindex=0,fuhao;//0 是正 
	printf("Enter a string:");
	while((tempp=getchar())!='#'){
		str[len] = tempp;
		len++;
	}
	str[len] ='\0';
	for(i=0;i<len;i++){
		
		if((str[i]>='A'&&str[i]<='F')
		||(str[i]>='a'&&str[i]<='f')
		||(str[i]>='0'&&str[i]<='9')){
		
			if(nindex==0){
				if(i>=1){
					if(str[i-1]=='-'){
						fuhao = 1;
					}
				}
				if(str[i]!='0'){
					nstr[nindex] = str[i];
					nindex++;
				}
			}else{
				nstr[nindex] = str[i];
				nindex++;
			}	
		}
	}
	nstr[nindex] = '\0';
	for(i=0;i<nindex;i++){
		if(nstr[i]>='A'&&nstr[i]<='F'){
			sum =sum * 16 + (nstr[i]-'A'+10); 	
		}
		if(nstr[i]>='a'&&nstr[i]<='f'){
			sum =sum*16+(nstr[i]-'a'+10); 
		}
		if(nstr[i]>='0'&&nstr[i]<='9'){
			sum =sum*16+(nstr[i]-'0');
		}
	}
	//+-P-Xf4+-1!#
	if(fuhao!=0){
		printf("%d",-sum);	
	}else{
		printf("%d",sum);
	}
	
}
//删除重复字符和删除指定字符

//选择排序 
void selectSortC(char arr1[],int n){
	int i,j,maxIndex;
	for(i=0;i<n-1;i++){
		maxIndex=i;
		for(j=i;j<n;j++){
			if(arr1[maxIndex]>arr1[j]){
				maxIndex = j;
			}		
		}
		if(i!=maxIndex){
			arr1[maxIndex]=arr1[maxIndex]^arr1[i];
			arr1[i]=arr1[maxIndex]^arr1[i];
			arr1[maxIndex]=arr1[maxIndex]^arr1[i];
		}
	}
}

void deleteC(){
	int len=0,i=0;
	char str[81],tempp,del;
	printf("Enter a delete char:");
	del=getchar();
	getchar();
	printf("Enter a string:");
	while((tempp=getchar())!='\n'){
		str[len] = tempp;
		len++;
	}
	str[len] = '\0';
	selectSortC(str,len);
	putchar(str[0]);
	for(i=1;i<len;i++){
		if(str[i]!=str[i-1]||str[i]==del){
			putchar(str[i]);
		}
	}
	
}
 


int main(void){
	//PBinsert();
	//P72P1and2();
	//PB4();
	//findMostNum();
	//juzheng();
	//findChar();	
	//change();	
	deleteC();
}

