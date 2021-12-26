#include<stdio.h>
#include"pojo.h"
#include"view.h"
#include"Model.h"
#include"Controller.h"
int main(void){
	int option;
	initDate();
	mainView();
	scanf("%d",&option);
	choiceOp(option);
	return 0;
} 
