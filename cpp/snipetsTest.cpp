using namespace std;

#include <gtest/gtest.h>
#include <vector>
#include "./snipets.h"

TEST(binarySearch, test){
    vector<int> nums = { 1, 2, 3, 4 };
    int target = 3;
    EXPECT_EQ(2, binarySearch(nums, target));
}