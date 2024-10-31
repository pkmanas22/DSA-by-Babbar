#include<iostream>
using namespace std;

void swap(int arr[], int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

// Approach - 1
void reverse(int arr[], int n) { 
    for(int i = 0; i < n/2; i++) {
        swap(arr, i, n-1-i);
    }
}

//  Approach - 2 
void reverse2 (int arr[], int n) {
    int start = 0;
    int end = n-1;
    while (end >= start) {
        swap(arr, start, end);
        start++;
        end--;
    }
}

int main() {
    // arr = {5,0,1,4,8,7}
    // ans = {7,8,4,1,0,5}

    int arr[6] = {5,0,1,4,8,7};
    
    reverse2(arr, 6);

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}