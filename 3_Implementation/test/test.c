#include "unity.h"
#include <stonepaperscissor.h>

#define PROJECT_NAME "Game"
void setUp(){}

void tearDown(){}

void test_rangeOfNumber(void)
{
TEST_ASSERT_EQUAL(10, rangeOfNumber(10));
TEST_ASSERT_EQUAL(40, rangeOfNumber(40));
TEST_ASSERT_EQUAL(999, rangeOfNumber(999));
}
void test_StonePaperScissor(void)
{
TEST_ASSERT_EQUAL(-1, StonePaperScissor('s','p'));
TEST_ASSERT_EQUAL(1, StonePaperScissor('s','c'));
TEST_ASSERT_EQUAL(-1, StonePaperScissor('p','c'));
TEST_ASSERT_EQUAL(1, StonePaperScissor('p','s'));
TEST_ASSERT_EQUAL(-1, StonePaperScissor('c','s'));
TEST_ASSERT_EQUAL(1, StonePaperScissor('c','p'));
TEST_ASSERT_EQUAL(0, StonePaperScissor('c','c'));
TEST_ASSERT_EQUAL(0, StonePaperScissor('p','p'));
TEST_ASSERT_EQUAL(0, StonePaperScissor('s','s'));

}



int main()
{
    UNITY_BEGIN();
    
    RUN_TEST(test_rangeOfNumber);
    RUN_TEST(test_StonePaperScissor);
    
    return UNITY_END();
}