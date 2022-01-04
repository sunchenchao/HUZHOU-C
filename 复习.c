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
//ָ���Ľ���  �βε�ֵ�Ľ���������Ӱ���ⲿ��ֵ
//ֻ��ȥ�޸�ָ��ָ������ݵ�ʱ����ǻ�ı��ⲿ��ֵ
//ǰ������Ҳ��ͬ��  ���÷���ȥ�ı������ֵ ������ȥ�ı�
//��ַ ����ȥ�ı���������� 
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
	//*p ����������ָ��ָ���ַ�����ݵ�ֵ 
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

//�ж��ǲ�������

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
//��ά�������ת
//������
//������
void erwei(){
	//��������˶�ά����ĳ�ʼ����ô����
	//���Բ�������ǰһ���ı���  ��һ�������������� 
	int arr[5][5]={
		1,2,3,4,5,
		6,7,8,9,10,
		11,12,13,14,15,
		16,17,18,19,20,
		21,22,23,24,25 
	};
	int i,j,temp;
	//����ת�� 
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			// i<=j ����������� 
			if(i>=j){//����������� 
				printf("%02d ",arr[i][j]);
				//��߾��Ǻܼ��˾���i��j��λ�û�����
				//��������֮����н���
				//������ɾ��ǿ��Խ��������� 
			}else{
				printf("00 ");
			}
		}
		putchar('\n');
	}
} 

//��ȡָ����β���ַ���
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

//����οյ����½�����
void pdtower(){
	int n,i,j,k;
	scanf("%d",&n);
	//�Ͻ�����
	for(i=1;i<=n;i++){
		//�ո�
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
		//�ո�
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

//շת�����
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
//����Ͷ���ָ��
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
	//��û�����ŵ������������*ȡ����Ȼ������+1  
	//���Ҫ��ȡ�����ַ���ô������Ҫȥ��ȡ��һ��*��
	//��ά���� һ��*����ȡ�������ַ��� 
	//**����ȡ��һ���ַ� 
} 

//�ݹ���Ŀ
//�׳˵ݹ�
int digui(int num) {
	if(num==1){
		return 1;
	}
	return num * digui(num - 1);
}
//շת������ĵݹ�
int zzxcfdg(int a,int b){
	if(a%b==0){
		return b;
	}
	return zzxcfdg(b,a%b);
} 
//�ݹ����ַ�ת
int revere(int a,int num){
	
	if(a/10==0){
		return a;
	}
	
	return  a%10*pow(10,num)+revere(a/10,num-1);  
} 

