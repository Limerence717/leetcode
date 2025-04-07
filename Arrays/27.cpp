//
// Created by LIUSHU on 2025/4/5.
//

// 27. 移除元素
// https://leetcode.cn/problems/remove-element/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int slow = 0; // 快慢指针
        for (int fast = 0; fast < nums.size(); fast++) {
            if (nums[fast] != val) {
                nums[slow++] = nums[fast];
            } else {
                continue;
            }
        }
        return slow;
    }
};

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    Solution solution;
    int res = solution.removeElement(nums, val);
    cout << res << endl;
    return 0;
}