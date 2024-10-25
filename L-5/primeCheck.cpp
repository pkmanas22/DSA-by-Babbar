#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    bool flag = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            flag = 0;
            cout << "Not a prime number";
            break;
        }
    }

    if(flag) {
        cout << "Prime number";
    }
}