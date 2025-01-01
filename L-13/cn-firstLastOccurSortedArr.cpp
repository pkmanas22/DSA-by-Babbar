#include<iostream>
#include<vector>
#include<utility>
using namespace std;
// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
int firstOccur(vector<int>& arr, int n, int k) {    // send vector through pass by reference, so that extra vector is not created in  every function call
    int ans = -1;
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k) {
          ans = mid;
          e = mid - 1;
        } else if (arr[mid] > k) {
          e = mid - 1;
        } else
          s = mid + 1;
    }
    return ans;
}

int lastOccur(vector<int>& arr, int n, int k) {
    int ans = -1;
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k) {
          ans = mid;
          s = mid + 1;
        } else if (arr[mid] > k) {
          e = mid - 1;
        } else
          s = mid + 1;
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 5, 5, 5, 5, 5, 5, 8, 10};
    int target = 5;
    int size = arr.size();

    pair<int, int> ans;
    ans.first = firstOccur(arr, size, target);
    ans.second = lastOccur(arr, size, target);
    cout << ans.first << " " << ans.second;
}