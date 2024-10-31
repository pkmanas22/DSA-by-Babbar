#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// https://www.naukri.com/code360/problems/pair-sum_697295
//  Pair Sum

int main() {
    vector<int> arr{1, 2, 3, 4 ,5};
    int s = 5;

    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    for (vector<int> x: ans) {
        for (int y: x) {
            cout << y << " ";
        }
        cout << endl;
    }
}