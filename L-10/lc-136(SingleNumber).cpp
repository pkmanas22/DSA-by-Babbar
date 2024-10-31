#include<iostream>
using namespace std;
// 136. Single Number
// https://leetcode.com/problems/single-number/description/

int main() {
    int arr[] = {4,1,2,1,2};

    int ans = 0;
    for (int i = 0; i < 5; i++) {
        ans = ans ^ arr[i];
    }
    cout << ans;
}