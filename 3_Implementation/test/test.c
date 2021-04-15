#include "unity.h"
#include "phonebook.h"
#include <string.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME    "contact"
int b=0;
int valid=1;
int ok=1;
/* Prototypes for all the test functions */
void test_search_contact(void);
void test_delete_contact(void);
void test_back_fun(void);
void test_func_list(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_search_contact);
  RUN_TEST(test_delete_contact);
  RUN_TEST(test_back_fun);
  RUN_TEST(test_func_list);
  
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}



void test_mainmenu()
{
  TEST_ASSERT_EQUAL(1,mainmenu(1));
  TEST_ASSERT_EQUAL(2,mainmenu(2));
  TEST_ASSERT_EQUAL(3,mainmenu(3));
  TEST_ASSERT_EQUAL(4,mainmenu(4));
  TEST_ASSERT_EQUAL(5,mainmenu(5));
  TEST_ASSERT_EQUAL(6,mainmenu(6));
}
void reset_struct()
{
  p.age=12;
  strcpy(p.name,"mani");
  strcpy(p.address,"andhrapradesh");
  strcpy(p.contact_no,"8247519556");
  strcpy(p.email,"pydimanigupta123@gmail.com");
  strcpy(p.gender,"M");
  strcpy(p.company,"L&t");
  strcpy(p.jobtitle,"manager");
  strcpy(p.nickname,"nani");

}
void test_search_contact()
{
  TEST_ASSERT_EQUAL(0,search_contact(1,"mani"));
  TEST_ASSERT_EQUAL(0,search_contact(1,"satya"));
}
void test_back_fun()
{
   TEST_ASSERT_EQUAL(1, back_fun(0));
}
void test_func_list()
{
  TEST_ASSERT_EQUAL(1,func_list(1));
}
void test_delete_contact()
{
  TEST_ASSERT_EQUAL(0,delete_contact(1,"mani"));
  TEST_ASSERT_EQUAL(0,delete_contact(1,"satya"));
}

/* Write all the test functions  */
void test_add_contact(void) {
  reset_struct();
  TEST_ASSERT_EQUAL(p.age, add_contact(1));
  strcpy(p.name,"M");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  strcpy(p.name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  strcpy(p.name,"M2M");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  reset_struct();
  strcpy(p.company,"M");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  strcpy(p.company,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  strcpy(p.company,"M2M");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  reset_struct();
  strcpy(p.gender,"M");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  reset_struct();
  strcpy(p.address,"Mu");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  strcpy(p.address,"Mummmmmmmmmmmmmmmmmmm");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  reset_struct();
  strcpy(p.contact_no,"90040873");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  strcpy(p.contact_no,"90040zz873");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  reset_struct();
  strcpy(p.email,"mani");
  TEST_ASSERT_EQUAL(1, add_contact(1));
  reset_struct();
  
}