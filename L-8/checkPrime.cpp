#include<iostream>
using namespace std;

void isPrime(int n) {
    bool flag = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) flag = 0; // not a prime number
    }
    if (flag) cout << n << " is prime number";
    else cout << n << " is not prime number";
}

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    isPrime(num);
}