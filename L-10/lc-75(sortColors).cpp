#include<iostream>
#include<vector>
using namespace std;
// 75. Sort Colors
// https://leetcode.com/problems/sort-colors/description/
// https://www.naukri.com/code360/problems/sort-0-1-2_631055

int main() {
    vector<int> nums {2,0,2,1,1,0}; 
    int size = nums.size();

    int i = 0, j = 0;
    int k = nums.size() - 1;

    while(j <= k) {
        if (nums[j] == 0) {
            swap(nums[i], nums[j]);
            i++;
            j++;
        } else if (nums[j] == 1) {
            j++;
        } else {
            swap(nums[j], nums[k]);
            k--;
        }
    }

    for(int x: nums) {
        cout << x << " ";
    }
}