#include<iostream>
using namespace std;

// 231. Power of Two
// https://leetcode.com/problems/power-of-two/description/

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) return false;

    int ans = ((n & (n-1)) == 0); // A number n is a power of two if and only if n > 0 and n & (n - 1) == 0

    cout << ans;

/*
    if (n <= 0) return false;

    int count = 0;
    while (n != 0) {
        int bit = n & 1;
        if (bit == 1) {
            count++;
        }
        n = n >> 1;
    }

    int ans = (count == 1);
    cout << ans;
*/

}