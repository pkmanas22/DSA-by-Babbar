#include<iostream>
#include<vector>
using namespace std;
// 852. Peak Index in a Mountain Array
// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 9, 8, 7, 6, 5};
    int s = 0;
    int e = arr.size() - 1;

    while (s < e) {
        int m = s + (e - s) / 2;
        if (arr[m] < arr[m + 1]){
            s = m + 1;
        } else 
            e = m;
    }
    cout << s << " " << e;
}