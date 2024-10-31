#include<iostream>
#include<vector>
using namespace std;
// https://www.naukri.com/code360/problems/duplicate-in-array_893397
//  Duplicate In Array

int main () {
    vector<int> arr{1, 2, 3, 4, 4};

    int ans = 0;

    for(int i = 0; i < arr.size(); i++) {
        ans ^= arr[i];
    }
    for(int i = 1; i < arr.size(); i++) {
        ans ^= i;
    }
	cout << ans;
}