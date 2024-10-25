#include<iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the value of amount: ";
    cin >> amount;

    switch (1) {
        case 1 : {
            cout << "100 Notes = " << (amount / 100) << endl;
            amount = amount % 100;
        }
        case 2 : {
            cout << "50 Notes = " << (amount / 50) << endl;
            amount %= 50;
        }
        case 3 : {
            cout  << "20 Notes = "<< (amount / 20) << endl;
            amount %= 20;
        }
        case 4 : {
            cout  << "1 Coins = "<< amount << endl;
        }
    }

}