#include<stdio.h>
int main(){
	int b;
	char c;
	float cost,a;
	printf("Enter a,b,c:"); 
	scanf("%f%d %c",&a,&b,&c);
	if(b == 90){
		if(c=='m')
			cost = a * 6.95 * 0.95; 	
		if(c=='e')
			cost = a * 6.95 * 0.97;	
	}
	if(b == 93){
		if(c=='m')
			cost = a * 7.44 * 0.95; 	
		if(c=='e')
			cost = a * 7.44 * 0.97;		
	}
	if(b == 97){
		
		if(c=='m')
			cost = a * 7.93 * 0.95; 	
		if(c=='e')
			cost = a * 7.93 * 0.97;	
	}
	printf("%.2f",cost);
	return 0;	
}
