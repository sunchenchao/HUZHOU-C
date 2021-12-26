typedef struct PeopleInfo 
{ 
	char name[15]; 
	char profession[50]; 
	char phone[12];
	char email[50]; 
	char addr[50];
 	struct PeopleInfo *next; 
}PeopleInfo;