#include <iostream>
#include <vector>
#include "./snipets.h"

int binarySearch(std::vector<int> nums, int target){
    long long res = -1;

    if (nums.size() == 0){ 
        return -1;
    }

    int low = 0;
    int high = nums.size() - 1;
    int index = low + (high - low) / 2;

    while (true) {
        if (low > high) {
            return -1;
        }
        if (nums[index] < target)
        {
            low = index + 1;
            index = low + (high - low) / 2;
        }
        else if (target < nums[index])
        {
            high = index - 1;
            index = low + (high - low) / 2;
        }
        else
        {
            return index;
        }
    }

}