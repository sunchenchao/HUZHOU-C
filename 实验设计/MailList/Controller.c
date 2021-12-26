#include"stdio.h"
#include"pojo.h"
#include"string.h"
#define ADDS 1 
#define FIND 2
#define ADD 3
#define DEL 4
#define SAVE 5
#define EXIT 6
#define LIST 7
int choiceOp(int option);
int golbalPeopleNum=0;
PeopleInfo *golbalPeople=NULL,*golbalEndPeople=NULL;
int show1(){
	printf("我是controll"); 
}
int addsController(){
	PeopleInfo *temp,*postion;
	temp = (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
	int option;
	while(1){
		if(strcmp((temp = addsView())->name,"0")==0){
			break;	
		}
		if(golbalPeopleNum!=0){
			golbalEndPeople ->next = temp;
			golbalEndPeople = temp;
			golbalEndPeople->next = NULL;
		}else{
			golbalPeople=temp;
			golbalEndPeople = temp;
			golbalEndPeople->next = NULL;		
			
		}	
		golbalPeopleNum++;	
	}	
	showListView(golbalPeople,golbalPeopleNum);
	mainView();
	scanf("%d",&option);
	choiceOp(option);
}

PeopleInfo *isExist(PeopleInfo *postion,PeopleInfo *people){
	PeopleInfo *allPeople =postion ;
	while(allPeople){
		
		if((strcmp(people->name,allPeople->name)==0)&&(strcmp(people->profession,allPeople->profession)==0)
			&&(strcmp(people->phone,allPeople->phone)==0)&&(strcmp(people->email,allPeople->email)==0)
				&&(strcmp(people->addr,allPeople->addr)==0)){
					return allPeople;
		}
		allPeople = allPeople->next;
	}
	return 0;	
}

PeopleInfo *isExistByName(PeopleInfo *postion,char *name){
	PeopleInfo *allPeople =postion,*pre;
	while(allPeople){
		pre = allPeople;
		if((strcmp(name,allPeople->name)==0)){
			return pre;
		}
		allPeople = allPeople->next;
	}
	return 0;	
}


int addController(){
	PeopleInfo *temp,*postion,*pre;
	int option,flag;
	temp = (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
	temp = addView();
	if(isExist(golbalPeople,temp)==0){
		if(golbalPeopleNum!=0){
			golbalEndPeople->next = temp;
			golbalEndPeople = temp;
			golbalEndPeople->next = NULL;
		}else{
			golbalPeople=temp;
			golbalEndPeople = temp;	
			golbalEndPeople->next = NULL;
		}	
		golbalPeopleNum++;		
	}		
	showListView(golbalPeople,golbalPeopleNum);
	mainView();
	scanf("%d",&option);
	choiceOp(option);
}


int findController(){
	int option;
	//showListView(golbalPeople,golbalPeopleNum);
	findView(golbalPeople,golbalPeopleNum);	
	showListView(golbalPeople,golbalPeopleNum);
	mainView();
	scanf("%d",&option);
	choiceOp(option);
};
int delController(){
	char *name;
	int option,i;
	PeopleInfo *temp,*temp1,*pre,*pree;
	name = delView();
	temp = isExistByName(golbalPeople,name);
	if(temp!=0){
		if(golbalEndPeople == golbalPeople){
			free(golbalEndPeople);
		}else if(golbalPeopleNum==2){
			if(temp == golbalPeople){
				free(golbalPeople);
				golbalPeople = golbalEndPeople;	
			}else{
				free(golbalEndPeople);
				golbalEndPeople = golbalPeople;
			}
		}else if(temp == golbalPeople){
			golbalPeople = golbalPeople->next;
			free(temp);
		}else if(temp == golbalEndPeople){
			temp1 = golbalPeople;
			for(i=0;i<golbalPeopleNum-2;i++){
				temp1 = temp1->next;
			}
			golbalEndPeople =temp1;
			free(golbalEndPeople->next);
			free(temp);
		}else{
			temp1 = golbalPeople;
			for(i=0;i<golbalPeopleNum-2;i++){
				pre = temp1;
				pree = temp1->next;
				if(pree == temp){
					pre->next = pre->next->next;
					free(pree);
					break;
				}
				temp1 = temp1->next; 
			}
		} 
		golbalPeopleNum--;
		golbalEndPeople->next = NULL; 
	}
	
	printf("删除成功\n");
	showListView(golbalPeople,golbalPeopleNum);
	mainView();
	scanf("%d",&option);
	choiceOp(option);
}

void initDate(){
	PeopleInfo *temp;
	golbalPeople = initModel();
	temp = golbalPeople;
	while(temp){
		golbalPeopleNum++;
		golbalEndPeople = temp;
		temp = temp->next;
	}	
}

void saveController(){
	int option;
    saveModel(golbalPeople,golbalPeopleNum);
    printf("保存完毕！\n");
    showListView(golbalPeople,golbalPeopleNum);
	mainView();
	scanf("%d",&option);
	choiceOp(option);
}

// 选择选项 
int choiceOp(int option){
	switch(option){
		case ADDS:
			addsController();
			break;
		case FIND:
			findController();
			break;
		case ADD:
			addController();
			break;
		case DEL:
	 		delController();
			break;
		case SAVE:
			saveController();
			break;
		case EXIT:
			printf("感谢你的使用Bye~");
			exit(0);
			break;
		case LIST:
			showListView(golbalPeople,golbalPeopleNum);
			mainView();
			scanf("%d",&option);
			choiceOp(option);
			break;
		default:
			break;
			
			
		
	}
}
