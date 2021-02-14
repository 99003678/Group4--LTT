#include "unity.h"
#include "inhand.h"
#include "test_inhand.h"

void test_inhand_basic(void)
{

	TEST_ASSERT_EQUAL(29466, inhand(400000,12000));
}

int test_inhand(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_inhand_basic);

	
	return UNITY_END();
}