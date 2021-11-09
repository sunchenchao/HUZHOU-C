#include<stdio.h>
#include<math.h>
int main(void){
	//problem4v2v2();
	//problem4v2v3();
 	//problem4v2v4();
 	//problem4v2v6();
 	//problem4v3v0();
 	//problem4v3v1();
 	//problem42v3();
 	//problem4v4v2();
 	problem4v4v1();
 	//come();
	
}
// 求整数的各个位置之和 
int problem4v2v2(){
	int num,i=0,sum=0,temp=0;
	printf("Enter a numbers:");
	scanf("%d",&num);
	while(num!=0){
		temp = num % 10; // is position num
		i++; // bit ++
		sum = sum + temp;
		num = num /10;
	}
	printf("%d %d",i,sum);
	return 0;
}

int problem4v2v3(){
	int n,i,min,temp;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d numbers:",n);
	scanf("%d",&min);
	for(i=1;i<n;i++){
		scanf("%d",&temp);
		if(temp < min){
			min = temp;
		}
	}
	printf("min=%d",min);
	return 0;
}

int problem4v2v4(){
	int m,n,count=0,temp,sum=0,i,j,flag;
	printf("Enter m,n:");
	scanf("%d%d",&m,&n);
	if(m>n ){
		return 0;
	}
	for(i=m;i<=n;i++){
		flag = 1;
		if(i==1||i==2){
			continue;
		}
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag = 0;
				break;
			}		
		}
		if(flag){
			count++;
			sum = sum + i;
		}
	}
	printf("%d %d",count,sum);
	
}

int problem4v2v6(){
	int a,n,sum=0,i,temp=0;
	printf("Enter a,n:");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++){
		temp =temp * 10+ 2;
		sum=sum + temp;
	}
	printf("s=%d",sum);
}
// 这个不是那个改错题  是最前面的那个改错题 重新再写一下 
int problem4v3v0(){
	int blank,digit,other;
	char ch;
	blank =digit=other = 0;
	while((ch = getchar())!='\n'){
		switch(ch){
			case '0': ;
		case '1': ;
		case '2': ;
		case '3': ;
		case '4': ;
		case '5': ;
		case '6': ;
		case '7': ;
		case '8': ;
		case '9': ;
			digit++;
			break;
		case ' ':
			blank++;
			break;
		default:
			other++;
			break;
			
		}
	} 
	printf("blank=%d,digit=%d,other=%d\n",blank,digit,other);
	return 0;
}
// 这个是改错题 
int problem4v3v1(){
	int flag;
	double eps,item,sum,denominator;
	flag = 1;
	denominator = 1;
	sum = 0;
	printf("Enter eps:");
	scanf("%lf",&eps);
	do{
		item = flag / denominator;
	//	printf("%f\n",item);
		sum = sum +item;
		flag = -flag;
		denominator = denominator + 3;
		//printf("%f----\n",sum);
		//printf("%f-----\n",fabs(item)-fabs(eps));
	}while(fabs(item)-fabs(eps) > 0.000001);
		printf("sum=%.6f\n",sum);		
	return 0;
} 

//4.2 嵌套循环
// 改错题 
int problem42v3(){
	int flag,i,j,m,n,s;
	
	printf("Enter m,n:");
	scanf("%d%d",&m,&n);
	if(m>n||m>10000||n>10000||m<=1||n<=1){
		printf("None\n");
	}
	flag = 0;
	for(i=m;i<=n;i++){
		s=0; // 错误
		for(j=1;j<=i/2;j++){
			if(i%j==0){// 错误 
				s= s+j;
			}
		}
		//printf("%d %dsi--\n",i,s);
		if(i==s){
			flag=1;
			printf("%d=1",i);
			for(j=2;j<=i/2;j++){
				if(i%j==0){// 错误 
					printf("+%d",j);
				}
			}
			printf("\n");
		}	
	}
	if(flag == 0){
		printf("None\n");
	}
	return 0;
} 
//水仙花数 
int problem4v4v2(){
	int n,pre,last,i,j,sum,temp,tp;
	printf("Enter n:");
	scanf("%d",&n);
	if(n>7||n<3)return;
	pre = pow(10,n-1);
	last = pow(10,n)-1;
	for(i=pre;i<=last;i++){
		sum = 0;
		temp = i;
		while(temp){
			tp = temp%10;
			sum =sum + pow(tp,n);
			temp =temp /10;
		}
		if(sum == i){
			printf("%d\n",sum);
		}	
	}
}



//验证哥德马赫的猜想 这个题目是可以不用写
//but  
int problem4v4v1(){
	int n,flag=1,i,j,tp;
	printf("Enter n:");
	scanf("%d",&n);
	if(n%2!=0 || n<6){
		printf("Invalid data");
		return;
	}
	for(i=2;i<=n/2;i++){
		flag = 1;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag = 0;
				break;
			}
		}
		tp =n-j;
		for(j=2;j<=sqrt(tp);j++){
			if(i%j==0){
				flag = 0;
				break;
			}
		}
		if(flag==0){
			printf("%d\n",tp);
		}	
	}
	return 0;
}