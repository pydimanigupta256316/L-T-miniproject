/**
 * @file header.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef header_h
#define header_h
/**
 * @brief 
 * 
 */
struct person
{
    char name[35];
    char address[50];
    char father_name[35];
    char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char citision_no[20];

};
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();

#endif
