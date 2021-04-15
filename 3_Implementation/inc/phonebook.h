/**
 * @file phonebook.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _phonebook_
#define _phonebook_

extern int ok;
extern int b, valid;
extern char ans; 

//functiondeclaration
void login(void);
int mainmenu(int read);
int add_contact(int read);
int func_list(int temp);
int search_contact(int read,char temp[]);
int modify_contact(int read,char temp[]);
int delete_contact(int read,char temp[]);
int back_fun(int temp);


struct contact//list of global variable
{
	int age;
	char gender[20];
	char name[20];
	char company[20];
	char jobtitle[20];
	char contact_no[20];
	char address[20];
	char email[20];
	char nickname[20];
};

struct contact  p,temp_c;


#endif  /* #define __phonebook__ */