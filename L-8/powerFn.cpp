#include<iostream>
using namespace std;

int power(int a, int b) {
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans *= a;
    }
    return ans;
}

int main() {
    int a, b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;

    int ans = power(a, b);
    cout << a << " to the power " << b << " is " << ans;

}