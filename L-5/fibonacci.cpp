#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // 0 1 1 2 3 5 8 13 21
    int a = 0;
    int b = 1;
    cout << a << " " << b;
    for (int i = 2; i < n; i++) {
        int sum = a+b;
        cout << " " << sum;
        a = b;
        b = sum;
    }
}