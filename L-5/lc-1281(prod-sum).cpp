#include<iostream>
using namespace std;

// 1281. Subtract the Product and Sum of Digits of an Integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    int prod = 1;
    int sum = 0;

    while(num) {
        int rem = num % 10;
        prod *= rem;
        sum += rem;
        num /= 10;
    }
    
    int ans = prod - sum;
    cout << ans;

}