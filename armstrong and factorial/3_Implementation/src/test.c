#include"unity.h"
#include "num.h"

/* Modify these two lines according to the project */

#define PROJECT_NAME    

/* Prototypes for all the test functions */
void fact(void);
void test_armstrong(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

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
  RUN_TEST(fact);
  RUN_TEST(test_armstrong);

  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void fact(void) {
  TEST_ASSERT_EQUAL(120,factorial(5));
  
}
void test_armstrong(void) 
{
  TEST_ASSERT_EQUAL(153,armstrong(153));
}
