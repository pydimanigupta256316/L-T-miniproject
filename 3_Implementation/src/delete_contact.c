//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"

int delete_contact(int read, char temp[])
{system("cls");
char name[20],g[15];
int found=0;
   FILE *k, *ft;
	ft=fopen("temp_file2.dat","w+");
	k=fopen("project.dat","r");
	printf("\ndelete contact \n");
    printf("\n Enter contact name: ");
	if(read==0)
	{
	scanf("%s",name);
	}
	else
	{
	strcpy(name,temp);
	}
	
	while (fscanf(k,"%s %s %s %s %i %s %s %s %s", p.name, p.company, p.jobtitle,&p.gender,&p.age, p.address, p.contact_no, p.email,p.nickname)!=EOF)
	{
		if (strcmp(p.name,name)!=0)
		fprintf(ft,"%s %s %s %c %i %s %s %s %s", p.name, p.company, p.jobtitle,p.gender,p.age, p.address, p.contact_no, p.email,p.nickname);
		else 
		{
			printf("%s %s %s %c %i %s %s %s %s", p.name, p.company, p.jobtitle,p.gender,p.age, p.address, p.contact_no, p.email,p.nickname);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{  printf("\n\n\t\t\t contact not found....");
	if(read==0)
	{
	printf("Press Y to proceed: ");
 scanf("%s",g);
 if(strcmp(g,"Y")==0)
{
 mainmenu(0);
 }}
 else
	return 0;
		
	}
	else
	{
		fclose(k);
		fclose(ft);
		remove("project.dat");
		rename("temp_file2.dat","project.dat");
		printf("\n\n\t\t\t contact deleted  ");
		printf("Press Y to proceed: ");
     if(read==0)
	 {
	 scanf("%s",g);

     if(strcmp(g,"Y")==0)
    {
     mainmenu(0);
    }}
	else
    return 1;
	}
 

	
	
}