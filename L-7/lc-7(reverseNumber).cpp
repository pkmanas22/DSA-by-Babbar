#include<iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;

// 7. Reverse Integer
// https://leetcode.com/problems/reverse-integer/description/

int main() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int ans = 0;
        
    while(x != 0) {
        int rem = x % 10;
        if (((ans > INT_MAX/10) || (ans == INT_MAX/10 && rem > 7)) ||
            ((ans < INT_MIN/10) || (ans == INT_MIN/10 && rem <= -8))) return 0;
        // maximum digit for INT_MAX is 7
        // minimum digit for INT_MIN is -8
        ans = (ans * 10) + rem;
        x /= 10;
    }

    cout << ans;
}