#include "unity.h"
#include "income.h"
#include "test_income.h"

void test_income_basic(void)
{

	TEST_ASSERT_EQUAL( 25000, income(500000));
}

int test_income(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_income_basic);

	
	return UNITY_END();
}