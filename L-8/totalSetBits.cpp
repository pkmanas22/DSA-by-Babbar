#include<iostream>
using namespace std;

int checkSetBits(int n) {
    int count = 0;
    while(n) {
        if (n & 1) count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    cout << "Total no of set bit in a and b is " << (checkSetBits(a) + checkSetBits(b));
}