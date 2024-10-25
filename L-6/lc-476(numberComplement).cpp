#include<iostream>
using namespace std;

// 476. Number Complement
// https://leetcode.com/problems/number-complement/description/

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    
    // int msb = (int)log2(num) + 1; // no of digits in its binary form  -- no need
    unsigned mask = ~0;       // 4294967295 --> it has all  bits (1)
    
    while (num & mask) {
        mask <<= 1;
    }

    int ans = (~num & ~mask);  // --> both will work
    // int ans = (~num ^ mask);  // --> both will work

    cout << ans;

    

}