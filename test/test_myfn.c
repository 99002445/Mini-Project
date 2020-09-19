#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <nira.h>
#define PROJECT_NAME    "DisplayOP"

/* Prototypes for all the test functions */
void test_display(void);
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_rem(void);
void test_power(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/

  CU_add_test(suite, "display",test_display);
  CU_add_test(suite, "add",test_add);
  CU_add_test(suite, "subtract",test_subtract);
  CU_add_test(suite, "multiply",test_multiply);
  CU_add_test(suite, "divide",test_divide);
  CU_add_test(suite, "rem",test_rem);
  CU_add_test(suite, "power",test_power);
	


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 

void test_add(void)
{
	CU_ASSERT(300==add(155,145));
	CU_ASSERT(400==add(155,25));
	
}
void test_subtract(void){
        CU_ASSERT(10==subtract(155,145));
	CU_ASSERT(400==subtract(155,25));
}
void test_multiply(void){
        CU_ASSERT(100==multiply(10,10));
	CU_ASSERT(200==multiply(155,25));
}
void test_divide(void){
	 CU_ASSERT(2==divide(10,5));
	CU_ASSERT(200==divide(155,25));
}
void test_rem(void){
	CU_ASSERT(0==divide(5,10));
	CU_ASSERT(11==divide(100,200));
}

void test_power(void){
        CU_ASSERT(4==power(2,2));
        CU_ASSERT(15==power(6,6));
}
