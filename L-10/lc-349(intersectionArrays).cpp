#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// 349. Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays/description/

int main() {
    vector<int> nums1 {4,9,5};
    vector<int> nums2 {9,4,9,8,4};

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int m = nums1.size();
    int n = nums2.size();

    vector<int> ans;

    int i = 0, j = 0;
    while(i < m && j < n) {
        if(nums1[i] == nums2[j]){
            if(ans.empty() || ans.back() != nums1[i])
                ans.push_back(nums1[i]);
            i++;  
            j++;
        } else if(nums1[i] < nums2[j]) i++;
        else if(nums1[i] > nums2[j]) j++;
    }

    for(int x: ans) {
        cout << x << " ";
    }

}