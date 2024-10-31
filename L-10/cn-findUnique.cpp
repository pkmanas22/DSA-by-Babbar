#include<iostream>
#include<vector>
using namespace std;
// https://www.naukri.com/code360/problems/find-unique_625159
//  Find Unique

int main () {
    int arr[] = {2, 3, 1, 6, 3, 6, 2};
    int size = 7;

   int ans = 0; 
    for(int i = 0; i < size; i++) {
        ans ^= arr[i];
    }
	cout << ans;
}