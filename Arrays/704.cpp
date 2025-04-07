//
// Created by LIUSHU on 2025/4/5.
//

// 704. 二分查找
// https://leetcode.cn/problems/binary-search/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int middle = left + (right - left) / 2;
            if (nums[middle] > target) {
                right = middle - 1;
            } else if (nums[middle] < target) {
                left = middle + 1;
            } else {
                return middle;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
//    int target = 2;
    Solution solution;
    int result = solution.search(nums, target);
//    cout << result << endl;
    printf("%d\n", result);
    return 0;
}