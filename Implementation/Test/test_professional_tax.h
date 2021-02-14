#include "unity.h"
#include "professional_tax.h"
#include "test_professional_tax.h"

void test_professional_tax_basic(void)
{

	TEST_ASSERT_EQUAL( 2400, professional_tax());
}

int test_professional_tax(void)
{
	
	UNITY_BEGIN();

	
	RUN_TEST(test_professional_tax_basic);

	
	return UNITY_END();
}