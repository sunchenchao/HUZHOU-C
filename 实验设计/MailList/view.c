#include"pojo.h"
#include"string.h" 
/**
** �������ʼ�� 
**
**/
void mainView(){
	printf("********************************************\n");
	printf("***********    ͨѶ¼����ϵͳ     **********\n");
	printf("********************************************\n");
	printf("***>>>>>>>> 1 -> ���������ϵ�� <<<<<<<<****\n");
	printf("***>>>>>>>> 2 -> ������ϵ��     <<<<<<<<****\n");
	printf("***>>>>>>>> 3 -> �����ϵ��     <<<<<<<<****\n");
	printf("***>>>>>>>> 4 -> ɾ����ϵ��     <<<<<<<<****\n");
	printf("***>>>>>>>> 5 -> ����ͨѶ¼     <<<<<<<<****\n");
	printf("***>>>>>>>> 6 -> �˳�ϵͳ       <<<<<<<<****\n");
	printf("***>>>>>>>> 7 -> �鿴��ǰ�б�   <<<<<<<<****\n");
	printf("********************************************\n");
	printf("*********** 2021284228�ﳿ��      **********\n");
	printf("********************************************\n");
	printf("��������ѡ��Ĳ�����");
}
PeopleInfo *addsView(){
	PeopleInfo *addP;
	addP = (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
	printf("������ͨѶ¼������!\n");
	printf("����������0��ʱ���ʾ�������!\n");
	printf("������������");
	scanf("%s",(*addP).name);
	if(strcmp((*addP).name,"0")==0){
		return addP;
	}
	printf("������ְҵ��");
	scanf("%s",(*addP).profession);
	printf("�������ֻ���");
	scanf("%s",(*addP).phone);
	printf("����������ʼ���");
	scanf("%s",(*addP).email);
	printf("������ͨѶ¼��ַ��");
	scanf("%s",(*addP).addr);
	return addP;
} 

int showListView(PeopleInfo *allPeople,int num){
	if(num==0){
		printf("��ǰ�б�Ϊ��!\n");
		return 0; 	
	}
	printf("��ͨѶ¼���ڹ���%d��\n",num);
	printf("---����------ְҵ------�ֻ�------Email------ͨѶ��ַ---\n");
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
	printf("��������Ҫ��ʾ�˵�����:");
	getchar();
 	gets(name);
	printf("%s��ͨѶ¼��������\n",name);
	printf("---����------ְҵ------�ֻ�------Email------ͨѶ��ַ---\n");
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
		printf("û���ҵ�ָ������ϵ��\n");
	}
} 
//��ӵ�����ϵ�� 
PeopleInfo *addView(){
	PeopleInfo *addP;
	addP = (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
	printf("������ͨѶ¼������!\n");
	printf("������������");
	scanf("%s",(*addP).name);
	printf("������ְҵ��");
	scanf("%s",(*addP).profession);
	printf("�������ֻ���");
	scanf("%s",(*addP).phone);
	printf("����������ʼ���");
	scanf("%s",(*addP).email);
	printf("������ͨѶ¼��ַ��");
	scanf("%s",(*addP).addr);
	return addP;
} 
char *delView(){
	char *name;
	name = (char *)calloc(15, sizeof(char));
	printf("��������Ҫɾ���˵�������");
	scanf("%s",name);
	return name;
}
