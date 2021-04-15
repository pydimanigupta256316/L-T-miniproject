//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "phonebook.h"
int func_list(int useless)
{
	system("cls");
	FILE *k;
	k=fopen("project.dat","r");
	printf("\n List contact details\n");
      int row;
	  char g[15];
		row=17;
		while(fscanf(k,"%s %s %s %s %i %s %s %s %s", p.name, p.company, p.jobtitle,&p.gender,&p.age, p.address, p.contact_no, p.email,p.nickname)!=EOF)
		{
		
			printf("%s\n",p.name);
			printf("%s\n",p.company);
			printf("%s\n",p.jobtitle);
		    printf("%c\n ",p.gender);
			
			printf("%i\n ",p.age);
		
			printf("%s\n",p.address);
			
			printf("%s\n",p.contact_no);
	
			printf("%s\n",p.email);
		    printf("%s\n",p.nickname);	
			row++;
		}
		fclose(k);
		if(useless==0)
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