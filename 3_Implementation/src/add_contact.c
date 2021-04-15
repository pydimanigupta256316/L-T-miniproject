//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"
int add_contact(int read)
{  
	//list of variables
	char ans,g[15];
	
	FILE*k;//file pointer
	k=fopen("project.dat","a");//open file in write mode
	printf("add new contact\n");
	if(read==0)
	{
	printf("enter name\n");
	scanf("%s",p.name);
	printf("company name\n");
	scanf("%s",p.company);
	printf("job title");
	scanf("%s",p.jobtitle);
	printf("enter age\n");
	scanf("%d",&p.age);
	printf("enter gender");
	scanf("%s",p.gender);
	printf("enter contact number");
	scanf("%s",p.contact_no);
    printf("enter address");
    scanf("%s",p.address);
    printf("enter email");
    scanf("%s",p.email);
    printf("enter nickname\n");
    scanf("%s",p.nickname);
	
	}
    fprintf(k,"%s %s %s %i %s %s %s %s %s \n", p.name, p.company, p.jobtitle, p.age,p.gender, p.address, p.contact_no, p.email,p.nickname);
    printf("\n\n\t\t\t.... contact saved  ...");
    fclose(k);//k file is closed
	if (read==0)
	{printf("Press Y to proceed: ");

    scanf("%s",g);

    if(strcmp(g,"Y")==0)

    {

    mainmenu(0);

    }}
	else
	return 1;
    
}
