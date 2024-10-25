#include<iostream>
using namespace std;

// 1009. Complement of Base 10 Integer
// https://leetcode.com/problems/complement-of-base-10-integer/

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Babbar's approach

    if(n == 0) return 1;
    
    int num = n;
    int mask = 0;
    while(n != 0) {
        mask = (mask << 1) | 1;
        n >>= 1;
    }
    int ans = (~num) & mask;
    cout << ans;

/*
    int ans = 0, power = 1;

    if ( n == 0) {
        return 1;
    }
    
    while(n) {
        int inverse_bit = (n % 2) == 0;
        ans = ans + (power * inverse_bit);
        power *= 2; // 2,4,8,16,...
        n /= 2;
    }

    cout << ans;
*/
}