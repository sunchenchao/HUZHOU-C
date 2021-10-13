#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,flag;
	printf("Enter a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	flag = b*b-4*a*c;
	if(a==0&&b==0&&c==0){
		printf("Zero Equation");
		return 0;
	}
	if(a==0&&b==0){
		printf("Not An Equation");
		return 0;
	}
	if(a==0){
		float end;
		end = (-c)/(b);
		printf("%.2f",end);
		return 0;
	}
	if(flag>=0){
		float ans1,ans2;
		ans1 = (-b+sqrt(flag))/(2.0*a);
		ans2 = (-b-sqrt(flag))/(2.0*a);
		if(abs(ans1-ans2)<0.00001){
			printf("%#.2f\n",ans1);
			return 0;
		} 
		printf("%#.2f\n",ans1);
		printf("%#.2f\n",ans2);
	}
	if(flag<0){
		float pre,out;
		pre = -b/2.0 *a;
		if(flag<0){
			flag = -flag;
		}
		out = sqrt(flag)/(2.0*a);//记住细节 用复数就是回出现问题的不要使用 
		printf("%.2f+%.2fi\n",pre,out);
		printf("%.2f-%.2fi\n",pre,out);
	}
}