#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    // naked for loop
    int i = 1;
    for ( ; ; ) {
        if(i <= n) {
            cout << i << " ";
        } else {
            break; // otherwise it will go to infinite loop
        }
        i++;
    }
}