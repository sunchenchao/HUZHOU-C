#include<stdio.h>
#include<math.h>
int pb1();
int pb5();
int main(void){
	pb5();
	
	

	
} 
int pbtest(){
		switch(2){
		case 1:
			printf("1\n");
		case 2:
			printf("2\n");
		case 3:
			printf("3\n");
			break;	
		case 4:
			printf("4\n");
		default:
			printf("other");
			break;	
	}	
}
//书本067页

int pb1(){
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		temp = a;
		a = b;
		b= temp;	
	}
	if(a<c){
		temp = a;
		a = c;
		c = temp;
	}
	if(b<c){
		temp = b;
		b= c;
		c= temp;
	}
	printf("%d%d%d",a,b,c);
} 
//三角形
int pb5(){
	double x1,y1,x2,y2,x3,y3,line1,line2,line3,area,s;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	line1 =sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	line2 =sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	line3 =sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	if(line1+line2>line3&&line2+line3>line1&&line1+line3>line2){
		s = (line1+line2+line3)/2;
		area = sqrt(s*(s-line1)*(s-line2)*(s-line3));
		printf("%f",area);
	}
	
	
	
	
} 