#include<iostream>
using namespace std;

int maxValue(int arr[], int n) {
    int max = INT32_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int minValue(int arr[], int n) {
    int min = INT32_MAX;
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[5] = {2,5,8,4,9};
    int max = maxValue(arr, 5);
    int min = minValue(arr, 5);
    cout << "Max value = " << max << endl;
    cout << "Min value = " << min << endl;
}