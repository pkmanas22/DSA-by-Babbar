#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;
    // num = 10101

    int decimal = 0;
    int power = 0;

    while(num != 0) {
        int rem = num % 10;
        if (rem == 1) {
            decimal += (rem * pow(2, power));
        }
        power++;
        num /= 10;
    }
    cout << decimal;
}