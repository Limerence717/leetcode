//
// Created by LIUSHU on 2025/4/6.
//

// 58. 区间和
// https://kamacoder.com/problempage.php?pid=1070

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; // 整数数组的长度
    scanf("%d", &n);
    vector<int> nums(n); // 整数数组
    vector<int> p(n); // 前缀和数组
    int presum = 0; // 前缀和
    for (int i = 0; i < n; i++) { // 在读取整数数组时，计算前缀和
        scanf("%d", &nums[i]);
        presum += nums[i];
        p[i] = presum;
    }
    int left, right, sum; // 左右边界和当前区间和
    while (~scanf("%d %d", &left, &right)) {
        sum = p[right] - (left > 0 ? p[left - 1] : 0); // 计算当前区间和
        printf("%d\n", sum);
    }
    return 0;
}