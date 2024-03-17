#include <gtest/gtest.h>
#include <sort/sort.h>
#include <common.h>

#define ASSERT_EQUAL(t1, t2) ASSERT_TRUE(t1==t2);

TEST(SortUnitTest, quickSortTest)
{
    std::vector<int> data = {3, 2, 4, 5, 7, 8, 0, 9, 23, 45, 21, 88, 56, 12, 1};
    std::vector<int> gdata = {0, 1, 2, 3, 4, 5, 7, 8, 9, 12, 21, 23, 45, 56, 88};
    std::shared_ptr<QuickSort> mysort = std::make_shared<QuickSort>(data);
    auto sdata = mysort->sortAndGetData();
    ASSERT_EQUAL(sdata, gdata);
}