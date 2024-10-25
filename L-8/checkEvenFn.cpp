#include<iostream>
using namespace std;

bool checkEven (int n) {
    if (n & 1) { // odd
        return 0;
    }else return 1; // even
}

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    if(checkEven(num)) {
        cout << num << " is even";
    } else cout << num << " is odd";

}