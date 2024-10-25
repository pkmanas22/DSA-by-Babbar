#include<iostream>
using namespace std;

int findAP(int n) {
    // print (3 * n) + 7 in AP
    return (3 * n) + 7;
}

int main() {
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    // Add your logic here
    cout << "AP of the number " << num << " is " << findAP(num);
}