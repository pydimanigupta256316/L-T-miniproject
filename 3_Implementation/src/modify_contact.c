//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation

#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"
int modify_contact(int read, char temp[])
{
	FILE *k, *ft;
  int i,b, valid=0;
  char ch;
  char name[20],g[15];

  system("cls");
 		ft=fopen("temp2.dat","w+");
	   k=fopen("project.dat","r");
	   if(k==NULL)
	   {
		printf("\n\t Cannot open file ");
	
		return 0;
	   }
       	printf("\n Edit contact\n");
		if(read==0)
		{
		printf("Enter the name of the contact : ");
	   	scanf("%s",name);
		}
		else{

			strcpy(name,temp);
		}
	   	fflush(stdin);
	   	
		
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			
			return 0;
		}
		while(fscanf(k,"%s %s %s %s %i %s %s %s %s", p.name, p.company, p.jobtitle,p.gender,&p.age, p.address, p.contact_no, p.email,p.nickname)!=EOF)
		{
			if(strcmp(p.name, name)==0)
			{
				valid=1;
			
				printf("*** Existing contact ***");
		
				printf("%s %s %s %s %i %s %s %s %s", p.name, p.company, p.jobtitle,p.gender,p.age, p.address, p.contact_no, p.email,p.nickname);
			
				printf("Enter New name: ");
				scanf("%s",p.name);    
			
				printf("Enter company: ");
				scanf("%s",p.company);
				printf("Enter jobtitle: ");
				scanf("%s",p.jobtitle);
			
				printf("Enter Gender: ");
				scanf(" %s",p.gender);
				
				printf("Enter age: ");
				scanf(" %i",&p.age);
				
				printf("Enter Address: ");
				scanf("%s",p.address);
				
				
				printf("Enter Contact no: ");
				scanf("%s",p.contact_no);
			
				
				printf("Enter New email: ");
				scanf("%s",p.email);
				printf("Enter New nickname: ");
				scanf("%s",p.nickname);
			
			
			    printf("\nPress U charecter for the Updating operation : ");
				scanf("%c",&ch);
				
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %i %s %s %s %s", p.name, p.company, p.jobtitle,p.gender,p.age, p.address, p.contact_no, p.email,p.nickname);
				printf("\ncontact updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %i %s %s %s %s", p.name, p.company, p.jobtitle,p.gender,p.age, p.address, p.contact_no, p.email,p.nickname);	
			}
		 }
		 if(!valid) printf("\n\t\tNO contact FOUND...");
	   fclose(ft);
	   fclose(k);
	   remove("project.dat");
   	   rename("temp2.dat","project.dat");
		  if(read==0)
		  {
		  printf("Press Y to proceed: ");

    scanf("%s",g);

    if(strcmp(g,"Y")==0)

    {

    mainmenu(0);

    }}
	else
		return 1;	
}