#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of array size: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter the value for " << (i + 1) << " : ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of the array is " << sum;

}