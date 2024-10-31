#include<iostream>
using namespace std;

//  The below function is built-in function
// void swap(int *a, int *b) {         // pointers are given
//     int temp = *a;      // store the value at address a
//     *a = *b;
//     *b = temp;
// }

int main() {
    // arr = {1,2,3,4,5}
    // ans = {2,1,4,3,5}

    int size = 5;
    int arr[size] = {1,2,3,4,5};

    for(int i = 0; i < size; i += 2) {
        if (i + 1 < size) {
            swap(arr[i], arr[i+1]); // std::swap(1st_address, 2nd_address)
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}