#include<bits/stdc++.h>		// this single file can handle all other import like vector, set, etc.
using namespace std;
// 15. 3Sum
// https://leetcode.com/problems/3sum/description/

// https://www.naukri.com/code360/problems/triplets-with-given-sum_893028
int main() {
    vector<int>nums{-1,0,1,2,-1,-4}; 

	int n =  nums.size();
/*
    // brute force approach
	set<vector<int>> st;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j; k < n; k++) {
				if(nums[i] + nums[j] + nums[k] == 0){
					vector<int> temp{nums[i], nums[j], nums[k]};
					sort(temp.begin(), temp.end());
					st.insert(temp);
				}
			}
		}
	}

	vector<vector<int>> ans{st.begin(), st.end()};
*/   

	// 2-pointer approach

	vector<vector<int>> ans;

	sort(nums.begin(), nums.end());

	for (int i = 0; i < n; i++) {
		if (i > 0 && nums[i] == nums[i-1])  continue;

		int j = i + 1;
		int k = n - 1;

		while (j < k) {
			int sum = nums[i] + nums[j] + nums[k];

			if (sum < 0) {
				j++;
			} else if (sum > 0) {
				k--;
			} else {    
				vector<int> temp{nums[i], nums[j], nums[k]};   // already sorted
				ans.push_back(temp);
				j++;
				k--;
				while (j < k && nums[j] == nums[j-1]) j++;
				while(j < k && nums[k] == nums[k+1]) k--;
			}
		}
		
	}

	for (vector<int> x: ans) {
		for(int y: x) {
			cout << y << " ";
		}
		cout << endl;
	}
}