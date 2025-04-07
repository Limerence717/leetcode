//
// Created by LIUSHU on 2025/4/5.
//

// 209. 长度最小的子数组
// https://leetcode.cn/problems/minimum-size-subarray-sum/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int res = INT_MAX;
        int i = 0, sum = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            while (sum >= target) {
                res = min(res, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }
        return res == INT_MAX ? 0 : res;
    }
};

int main() {
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    Solution solution;
    int res = solution.minSubArrayLen(target, nums);
    cout << res << endl;
    return 0;
}