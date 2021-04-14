#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include "header.h"
void listrecord()
{
    struct person p;
    FILE *f;
f=fopen("project","rb");
if(f==NULL)
{
printf("\nfile opening error in listing :");

exit(1);
}
while(fread(&p,sizeof(p),1,f)==1)
{
     printf("\n\n\n YOUR RECORD IS\n\n ");
        printf("\nName=%s\nAdress=%s\nFather name=%s\nMother name=%s\nMobile no=%ld\nSex=%s\nE-mail=%s\nCitizen no=%s",p.name,p.address,p.father_name,p.mother_name,p.mble_no,p.sex,p.mail,p.citision_no);

	 getch();
	 system("cls");
}
fclose(f);
 printf("\n Enter any key");
 getch();
    system("cls");
menu();
}