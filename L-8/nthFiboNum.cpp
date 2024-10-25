#include<iostream>
using namespace std;

int fibonacciNum(int n) {
    // 0 1 1 2 3 5 8 13 21 34
    if (n == 1 || n == 2) return n-1;

    int a = 0;
    int b = 1;
    int ans = 0;

    for(int i = 3; i <= n; i++) {
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << n << "th fibonacci number is " << fibonacciNum(n);

}