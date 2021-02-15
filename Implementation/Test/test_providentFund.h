#include "unity.h"
#include "providentFund.h"
#include "test_providentFund.h"

void test_providentFund_basic(void)
{

	TEST_ASSERT_EQUAL ( 12000, providentFund(400000));
}

int test_providentFund(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_providentFund_basic);

	
	return UNITY_END();
}
