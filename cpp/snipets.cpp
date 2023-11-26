#include <iostream>
#include <vector>
#include "./snipets.h"

int binarySearch(std::vector<int> nums, int target){
    long long res = -1;

    if (nums.size() == 0){ 
        return -1;
    }

    int index = nums.size() - 1; // 0-indexed

    while (true) {
        if (nums[index] < target) {
            index = index / 2;
            if (index == 0) {
                break;
            }
        } else if (target < nums[target]) {
            index = (index + nums.size()) / 2;
            if (nums.size() < index) {
                break;
            }
        } else {
            break;
        }
    }

    return index;
}