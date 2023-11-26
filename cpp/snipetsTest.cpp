using namespace std;

#include <gtest/gtest.h>
#include <vector>
#include "./snipets.h"

TEST(binarySearch, test_find){
    vector<int> nums = { 1, 2, 3, 4 };
    int target = 3;
    EXPECT_EQ(2, binarySearch(nums, target));
}

TEST(binarySearch, test_find2){
    vector<int> nums = { 1, 2, 3, 4 };
    int target = 2;
    EXPECT_EQ(1, binarySearch(nums, target));
}

TEST(binarySearch, test_over_last){
    vector<int> nums = { 1, 2, 3, 4 };
    int target = 5;
    EXPECT_EQ(4, binarySearch(nums, target));
}

TEST(binarySearch, test_under_first){
    vector<int> nums = { 1, 2, 3, 4 };
    int target = 0;
    EXPECT_EQ(0, binarySearch(nums, target));
}

TEST(binarySearch, test_first){
    vector<int> nums = { 1, 2, 3, 4 };
    int target = 1;
    EXPECT_EQ(0, binarySearch(nums, target));
}

TEST(binarySearch, test_last){
    vector<int> nums = { 1, 2, 3, 4 };
    int target = 4;
    EXPECT_EQ(3, binarySearch(nums, target));
}

TEST(binarySearch, test_mid){
    vector<int> nums = { 1, 2, 4, 5 };
    int target = 3;
    EXPECT_EQ(2, binarySearch(nums, target));
}

TEST(binarySearch, test_no_list){
    vector<int> nums = { };
    int target = 3;
    EXPECT_EQ(-1, binarySearch(nums, target));
}