#include <iostream>
#include <vector>
#include "./snipets.h"

int binarySearch(std::vector<int> nums, int target){
    if (nums.size() == 0){ 
        return -1;
    }

    int low = -1; // index 0 が正解を考慮
    int high = nums.size(); // 最大値より大きい場合を考慮
    int mid;

    while (high - low > 1) {
        mid = low + (high - low) / 2;
        if (nums[mid] < target) low = mid;
        else if (target <= nums[mid]) high = mid;
    }

    return high;
}

std::vector<std::string> split(std::string str, char del) {
    int first = 0;
    int last = str.find_first_of(del);

    std::vector<std::string> result;

    while (first < str.size()) {
        std::string subStr(str, first, last - first);

        result.push_back(subStr);

        first = last + 1;
        last = str.find_first_of(del, first);

        if (last == std::string::npos) {
            last = str.size();
        }
    }

    return result;
}
