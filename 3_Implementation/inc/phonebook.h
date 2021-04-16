/**
 * @file phonebook.h
 * @author mani gupta
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
void login(void); //to verify the password
int mainmenu(int read);//it will display list of features 
int add_contact(int read);//to add contact
int func_list(int temp);//to view the list
int search_contact(int read,char temp[]);//to search contact
int modify_contact(int read,char temp[]);//to edit contact details
int delete_contact(int read,char temp[]);//to delete contact 
int back_fun(int temp);//out of phonebook


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