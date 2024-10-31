#include<iostream>
using namespace std;

int search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int arr[] = {5,7,8,10,15,20,9,4,6,65};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = search(arr, size, target);

    if (index == -1) {
        cout << "Target element is not found.";
    } else {
        cout << "Target element is found at " << index << " index.";
    }
}