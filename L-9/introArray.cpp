#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{ // void printArray(int *arr, int size) --> hover to see, the function gets arr as pointer and it takes as starting address

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // declaration
    int arr[3];                              // must give size
    cout << arr << endl;                     // it gives the address like "0x61ff04"
    int size = sizeof(arr) / sizeof(arr[0]); // to get the size of array
    printArray(arr, size);                   // if we don't initialize, then we got random values like "1996975917 4201088 6422352"

    // Initialization
    int num[] = {5, 10, 15, 20, 25};                 // we can give size also, but optional
    printArray(num, (sizeof(num) / sizeof(num[0]))); // return all elements

    int none[] = {};    // it has 0 elements
    int zero[10] = {0}; // all 10 values automatically assigned to 0
    printArray(zero, (sizeof(zero) / sizeof(zero[0])));
    int custom[10];

    fill(custom, custom + 10, 55); // std::fill (start_address, end_address, value)
    fill_n(custom, 10, 99);        // std::fill_n(start_address, no_of_elements, value)
    printArray(custom, (sizeof(custom) / sizeof(custom[0])));

    int firstValue[10] = {10}; // only first value set as 10 , and rest are zero
    printArray(firstValue, (sizeof(firstValue) / sizeof(firstValue[0])));



    //  Arrays are always passed by reference. 
    // So, when we pass array to a function, it shares the address and later inside the function changes will effect to original array.
}