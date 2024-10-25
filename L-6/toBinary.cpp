#include<iostream>
#include <math.h>
using namespace std;

// This one is working good in online IDE

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    int binary = 0;
    int i = 0;
    while (num != 0) {
        int bit = num & 1;

        binary = (bit * pow(10, i)) + binary;
        
        num = num >> 1;
        i++;
    }
    cout << binary;

}