#include<iostream>
#include<vector>
using namespace std;
// Find pivot element is rotated sorted array
int main() {
    vector<int> arr = {7, 9, 10, 1, 2, 3};
    int s = 0;
    int e = arr.size() - 1;

    while (s < e) {
        int m = s + (e - s) / 2;
        if (arr[m] > arr[0]) {
            s = m + 1;
        } else if (arr[m] < arr[e]) {
            e = m;
        }
    }
    cout << e;
}