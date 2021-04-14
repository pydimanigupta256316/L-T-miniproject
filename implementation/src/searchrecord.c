#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include "header.h"
void searchrecord()
{
    struct person p;
FILE *f;
char name[100];

f=fopen("project","rb");
if(f==NULL)
{
    printf("\n error in opening\a\a\a\a");
    exit(1);

}
printf("\nEnter name of person to search\n");
got(name);
while(fread(&p,sizeof(p),1,f)==1)
{
    if(strcmp(p.name,name)==0)
    {
        printf("\n\tDetail Information About %s",name);
        printf("\nName:%s\naddress:%s\nFather name:%s\nMother name:%s\nMobile no:%ld\nsex:%s\nE-mail:%s\nCitision no:%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);
    }
        else
        printf("file not found");

}
 fclose(f);
  printf("\n Enter any key");

	 getch();
    system("cls");
menu();
}