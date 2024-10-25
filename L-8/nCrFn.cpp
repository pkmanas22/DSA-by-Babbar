#include<iostream>
using namespace std;

int factorial (int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

float nCr(int n, int r) {
    // nCr = n! / (r! * (n-r)!)
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);

    return numerator/denominator;
}

int main() {
    int n, r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;

    int ans = nCr(n, r);

    cout << "nCr = " << ans;
}