#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 1. Two Sum
// https://leetcode.com/problems/two-sum/description/

int main() {
    vector<int> nums {3,2,4};
    int target = 6;
    int n = nums.size();
    
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(j);
                break;
            }
        }
        if (!ans.empty()) {
            ans.push_back(i);
            break;
        }
    }

    sort(ans.begin(), ans.end());

    cout << ans[0] << " " << ans[1];

}