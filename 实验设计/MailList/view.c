#include"pojo.h"
#include"string.h" 
/**
** 主界面初始化 
**
**/
void mainView(){
	printf("********************************************\n");
	printf("***********    通讯录管理系统     **********\n");
	printf("********************************************\n");
	printf("***>>>>>>>> 1 -> 批量添加联系人 <<<<<<<<****\n");
	printf("***>>>>>>>> 2 -> 查找联系人     <<<<<<<<****\n");
	printf("***>>>>>>>> 3 -> 添加联系人     <<<<<<<<****\n");
	printf("***>>>>>>>> 4 -> 删除联系人     <<<<<<<<****\n");
	printf("***>>>>>>>> 5 -> 保存通讯录     <<<<<<<<****\n");
	printf("***>>>>>>>> 6 -> 退出系统       <<<<<<<<****\n");
	printf("***>>>>>>>> 7 -> 查看当前列表   <<<<<<<<****\n");
	printf("********************************************\n");
	printf("*********** 2021284228孙晨超      **********\n");
	printf("********************************************\n");
	printf("请输入您选择的操作：");
}
PeopleInfo *addsView(){
	PeopleInfo *addP;
	addP = (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
	printf("请输入通讯录的内容!\n");
	printf("当姓名输入0的时候表示创建完毕!\n");
	printf("请输入姓名：");
	scanf("%s",(*addP).name);
	if(strcmp((*addP).name,"0")==0){
		return addP;
	}
	printf("请输入职业：");
	scanf("%s",(*addP).profession);
	printf("请输入手机：");
	scanf("%s",(*addP).phone);
	printf("请输入电子邮件：");
	scanf("%s",(*addP).email);
	printf("请输入通讯录地址：");
	scanf("%s",(*addP).addr);
	return addP;
} 

int showListView(PeopleInfo *allPeople,int num){
	if(num==0){
		printf("当前列表为空!\n");
		return 0; 	
	}
	printf("本通讯录现在共有%d人\n",num);
	printf("---姓名------职业------手机------Email------通讯地址---\n");
	while(allPeople&&num--){//
		printf("---%s------%s------%s------%s------%s---\n",
		allPeople->name,allPeople->profession,allPeople->phone
		,allPeople->email,allPeople->addr);
		allPeople = allPeople->next;	
	}
	printf("==================================================================================\n");
	return 1;
}
void findView(PeopleInfo *allPeople,int num){
	char name[15];
	int flag = 0;
	printf("请输入需要显示人的姓名:");
	getchar();
 	gets(name);
	printf("%s的通讯录内容如下\n",name);
	printf("---姓名------职业------手机------Email------通讯地址---\n");
	while(num--){
		if(strcmp(allPeople->name,name)==0){
			printf("---%s------%s------%s------%s------%s---\n",
			allPeople->name,allPeople->profession,allPeople->phone
			,allPeople->email,allPeople->addr);
			allPeople = allPeople->next;
			flag = 1;
		}else{
			allPeople = allPeople->next;
		}
	}
	if(flag == 0){
		printf("没有找到指定的联系人\n");
	}
} 
//添加单个联系人 
PeopleInfo *addView(){
	PeopleInfo *addP;
	addP = (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
	printf("请输入通讯录的内容!\n");
	printf("请输入姓名：");
	scanf("%s",(*addP).name);
	printf("请输入职业：");
	scanf("%s",(*addP).profession);
	printf("请输入手机：");
	scanf("%s",(*addP).phone);
	printf("请输入电子邮件：");
	scanf("%s",(*addP).email);
	printf("请输入通讯录地址：");
	scanf("%s",(*addP).addr);
	return addP;
} 
char *delView(){
	char *name;
	name = (char *)calloc(15, sizeof(char));
	printf("请输入需要删除人的姓名：");
	scanf("%s",name);
	return name;
}
