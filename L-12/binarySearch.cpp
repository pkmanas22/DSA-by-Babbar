#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    // for binary search the array should be sorted
    int arr[9] = {1,2,5,8,10,25,28,32,37};
    int key = 27;

    int foundIndex = binarySearch(arr, 9, key);

    cout << key << " found at index " << foundIndex;
}