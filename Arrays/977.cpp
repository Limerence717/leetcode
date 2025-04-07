//
// Created by LIUSHU on 2025/4/5.
//

// 977. 有序数组的平方
// https://leetcode.cn/problems/squares-of-a-sorted-array/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int> &nums) {
        int k = nums.size() - 1;
        vector<int> res(nums.size(), 0);
        for (int i = 0, j = nums.size() - 1; i <= j;) {
            if (nums[i] * nums[i] > nums[j] * nums[j]) {
                res[k--] = nums[i] * nums[i];
                i++;
            } else {
                res[k--] = nums[j] * nums[j];
                j--;
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    Solution solution;
    vector<int> result = solution.sortedSquares(nums);
    printf("[");
    for (int i = 0; i < result.size(); i++) {
        if (i != 0) {
            printf(",%d", result[i]);
        } else {
            printf("%d", result[i]);
        }
    }
    printf("]\n");
    return 0;
}