#include"pojo.h"
#include"stdio.h"
void saveModel(PeopleInfo *golbalPeople,int golbalPeopleNum ){
	FILE *pf;
	char *str;
	int i=0,len;
	pf = fopen("data.txt", "wb");
	fwrite("姓名\t职业\t手机\tEmail\t通讯地址\r\n", sizeof("姓名\t职业\t手机\tEmail\t通讯地址\n"), 1, pf);
	for (i = 0; i <golbalPeopleNum; i++)
	{
		 str = (char *)calloc(1024, sizeof(char));
		 strcat(str,golbalPeople->name);
		 strcat(str, "\t");
		 strcat(str,golbalPeople->profession);
		 strcat(str, "\t");
		 strcat(str,golbalPeople->phone);
		 strcat(str, "\t");
		 strcat(str,golbalPeople->email);
		 strcat(str, "\t");
		 strcat(str,golbalPeople->addr);
		 strcat(str,"\r\n");
		 golbalPeople = golbalPeople->next;
		 fprintf(pf,"%s", str);
		 free(str);
	}
	fclose(pf);
}
PeopleInfo *initModel(){
	 FILE *fp;
 	 int i=0;
 	 PeopleInfo *golbalPeople,*next,*next1;
 	 golbalPeople = (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
 	 next= (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
	  char StrLine[1024];
 	 
	   if( (fp=fopen("data.txt","r+")) == NULL ){
        //puts("Fail to open file!");
        //exit(0);
        return NULL;
    }
    fscanf(fp,"%s\t%s\t%s\t%s\t%s\r\n",golbalPeople->name, golbalPeople->profession, golbalPeople->phone, golbalPeople->email,golbalPeople->addr);
    while (!feof(fp)) 
      { 
  		  if(i==0){
  		  	 fscanf(fp, "%s\t%s\t%s\t%s\t%s\r\n", golbalPeople->name, golbalPeople->profession, golbalPeople->phone, golbalPeople->email,golbalPeople->addr);
  		  	 next = golbalPeople;
			}else{
			next1 = (PeopleInfo *)calloc(1, sizeof(PeopleInfo));
  		  	fscanf(fp, "%s\t%s\t%s\t%s\t%s\r\n", next1->name, next1->profession, next1->phone, next1->email,next1->addr);
			next->next = next1;
			next = next1;
  		  }
  		  i++;
      } 
    fclose(fp);
    
    return golbalPeople;
}

