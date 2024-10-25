#include<iostream>
using namespace std;

// 191. Number of 1 Bits
// https://leetcode.com/problems/number-of-1-bits/description/

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    int count = 0;
    while(num) {
        if(num & 1) {
            count++;
        }
        num >>= 1;
    }
    cout << count;
}