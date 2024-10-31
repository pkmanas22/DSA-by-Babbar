#include<iostream>
#include <vector>
#include<algorithm>     // for sort() function
using namespace std;
// https://leetcode.com/problems/unique-number-of-occurrences/description/
// 1207. Unique Number of Occurrences

int main() {
    vector<int> arr {1,2} ;       

    sort(arr.begin(), arr.end());       // sort(first, last)

    vector<int> unq;

/*
    int count = 1;

    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] == arr[i+1]) count++;
        else {
            unq.push_back(count);
            count = 1;
        }
    }
    unq.push_back(count);
*/
    for (int i = 0; i < arr.size(); i++) {
        int count = 1;
        // while((arr[i] == arr[i+1]) && (i < arr.size() - 1)) {       // give heap-buffer-overflow
        while(i < arr.size() - 1 && arr[i] == arr[i+1]) {
            count++;
            i++;
        }
        unq.push_back(count);
    }

    sort(unq.begin(), unq.end());

    bool ans;
    for (int i = 0; i < unq.size() - 1; i++){
        if (unq[i] == unq[i+ 1]) {
            ans = false;
            break;
        } else ans = true;
    }

    cout << ans;
       
}