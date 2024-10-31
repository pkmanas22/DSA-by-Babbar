#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// https://leetcode.com/problems/find-all-duplicates-in-an-array/
// 442. Find All Duplicates in an Array

int main() {
    vector<int> nums{4,3,2,7,8,2,3,1};
    vector<int> ans;

    int size = nums.size();

    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < size - 1; i++) {
        if (nums[i] == nums[i + 1]) ans.push_back(nums[i]);
    }

    for(int x: ans) {
        cout << x << " ";
    }
} 