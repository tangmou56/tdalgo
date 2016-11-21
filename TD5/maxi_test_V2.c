#include"/usr/include/CUnit/CUnit.h"
#include"/usr/include/CUnit/Basic.h"
#include"maxi.h"

#include <stdio.h>

int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }


void max_test_1(void) {
    CU_ASSERT_EQUAL( max(1,2), 2);
    CU_ASSERT_EQUAL( max(2,1), 2);
}

void max_test_2(void) {
    CU_ASSERT_EQUAL( max(2,2), 2);
    CU_ASSERT_EQUAL( max(0,0), 0);
    CU_ASSERT_EQUAL( max(-1,-1), -1);
}

void max_test_3(void) {
    CU_ASSERT_EQUAL( max(-1,-2), -1);
}


int main ( void )
{
    CU_pSuite pSuite = NULL;
    
       if ( CUE_SUCCESS != CU_initialize_registry() )
        return CU_get_error();

    pSuite = CU_add_suite( "max_test_suite", init_suite, clean_suite );
    if ( NULL == pSuite ) {
        CU_cleanup_registry();
        return CU_get_error();
    }
    

    if ( (NULL == CU_add_test(pSuite, "max_test_1", max_test_1)) ||
        (NULL == CU_add_test(pSuite, "max_test_2", max_test_2)) ||
        (NULL == CU_add_test(pSuite, "max_test_3", max_test_3))
        )
    {
        CU_cleanup_registry();
        return CU_get_error();
    }
    

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    printf("\n");
    CU_basic_show_failures(CU_get_failure_list());
    printf("\n\n");

    CU_cleanup_registry();
    return CU_get_error();
}
