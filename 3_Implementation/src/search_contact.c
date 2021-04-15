#include<stdio.h>//Use for standard I/O Operation


#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"

int search_contact(int read, char temp[])
{   
	char name[20];
	
	FILE *k;
	char g[20];
	k=fopen("project.dat","r");
	printf("\n Search contact\n");
	
	printf("\n Enter  Name to be viewed:");
	if(read==0)
	{
	scanf("%s",name);
	}
	else
	{
	strcpy(name,temp);
	}
	
	while(fscanf(k,"%s %s %s %s %i %s %s %s %s", p.name, p.company, p.jobtitle,p.gender,&p.age, p.address, p.contact_no, p.email,p.nickname)!=EOF)
	{
		if(strcmp(p.name,name)==0)
		{
			
			printf("name: ");
				printf("%s",p.name);    
			
				printf("company: ");
				printf("%s",p.company);
				printf("jobtitle: ");
				printf("%s",p.jobtitle);
			
				printf("gender: ");
				printf(" %s",p.gender);
				
				printf(" age: ");
				printf(" %i",p.age);
				
				printf(" Address: ");
				printf("%s",p.address);
				
				
				printf(" Contact no: ");
				printf("%s",p.contact_no);
			
				
				printf(" email: ");
				printf("%s",p.email);
				printf(" nickname: ");
				printf("%s",p.nickname);
		
			printf("\n");
		    return 1;
		}
	   }
	   if(strcmp(p.name,name)!=0)
	   {
		
	printf("Record not found!");
	return 0;
	   }
	fclose(k);
}
/*	if(read==0)
	{
	printf("Press Y to proceed: ");

    scanf("%s",g);

    if(strcmp(g,"Y")==0)

    {

    mainmenu(0);

    }}
	else
	return 1;
}*/
