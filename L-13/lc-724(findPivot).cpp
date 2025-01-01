#include<iostream>
#include<vector>
#include<numeric>  // for accumulate
using namespace std;
// https://leetcode.com/problems/find-pivot-index/description/
// 724. Find Pivot Index
int pivotIndex (vector<int> &nums) {
    int leftSum = 0;
    int rightSum = accumulate(nums.begin(), nums.end(), 0);

    for (int i = 0; i < nums.size(); i++) {
        rightSum -= nums[i];
        if (leftSum == rightSum) return i;
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums = {1,7,3,6,5,6};

    cout << pivotIndex(nums);
}