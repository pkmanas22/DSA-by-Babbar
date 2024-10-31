#include<iostream>
using namespace std;
//  Sort 0 1
// https://www.naukri.com/code360/problems/sort-0-1_624379

int main() {
    int input[] = {0, 1, 1, 0, 1, 0, 1}; 
    int size = 7;
    //Write your code here
    int i = 0; 
    int j = size - 1;

    while (i < j) {
        while(i < j && input[i] == 0) i++;
        while(i < j && input[j] == 1) j--;
        if (input[i] > input[j]) {
            swap(input[i], input[j]);
            i++;
            j--;
        }
        /*
        if (input[i] > input [j]) {
            swap(input[i], input[j]);
            i++;
            j--;
        } else if (input[i] == input[j]) {
            if (input[i] == 0) {
                i++;
            } else j--;
        } else {
            i++;
            j--;
        }
        */
    }

    for(int x: input) {
        cout << x << " ";
    }
}