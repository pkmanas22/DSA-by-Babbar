#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int count = 1;     // Counter for numeric patterns
    char letter = 'A'; // Counter for alphabetic patterns

    while (row <= n)
    {
        int col = 1;

        // Q-1: Print a grid of stars
        /*
        Output example (n=4):
        * * * *
        * * * *
        * * * *
        * * * *
        */
        /*
        while (col <= n) {
            cout << " * ";
            col++;
        }
        */

        // Q-2: Print numbers from 1 to n in each row
        /*
        Output example (n=4):
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4
        */
        /*
        while (col <= n) {
            cout << " " << col << " ";
            col++;
        }
        */

        // Q-3: Print numbers in decreasing order in each row
        /*
        Output example (n=4):
        4 3 2 1
        4 3 2 1
        4 3 2 1
        4 3 2 1
        */
        /*
        while (col <= n) {
            cout << " " << (n - col + 1) << " ";
            col++;
        }
        */

        // Q-4: Print sequential numbers in each row
        /*
        Output example (n=4):
        1 2 3 4
        5 6 7 8
        9 10 11 12
        13 14 15 16
        */
        /*
        while (col <= n) {
            cout << " " << count << " ";
            count++;
            col++;
        }
        */

        // Q-5: Print increasing number of stars per row
        /*
        Output example (n=4):
        *
        * *
        * * *
        * * * *
        */
        /*
        while (col <= row) {
            cout << " * ";
            col++;
        }
        */

        // Q-6: Print the row number repeatedly in each row
        /*
        Output example (n=4):
        1
        2 2
        3 3 3
        4 4 4 4
        */
        /*
        while (col <= row) {
            cout << row;
            col++;
        }
        */

        // Q-7: Print sequential numbers in increasing count per row
        /*
        Output example (n=4):
        1
        2 3
        4 5 6
        7 8 9 10
        */
        /*
        while (col <= row) {
            cout << count;
            count++;
            col++;
        }
        */

        // Q-8: Print increasing numbers starting from row number
        /*
        Output example (n=4):
        1
        2 3
        3 4 5
        4 5 6 7
        */
        /*
        int temp = row;
        while (col <= row) {
            cout << temp;
            temp++;
            col++;
        }
        */

        // Q-9: Print decreasing numbers starting from row number
        /*
        Output example (n=4):
        1
        2 1
        3 2 1
        4 3 2 1
        */
        /*
        int temp = row;
        while (col <= row) {
            cout << temp;
            temp--;
            col++;
        }
        */

        // Q-10: Print same character (based on row number) in each row
        /*
        Output example (n=4):
        A A A A
        B B B B
        C C C C
        D D D D
        */
        /*
        while (col <= n) {
            cout << char(letter + row - 1);
            col++;
        }
        */

        // Q-11: Print characters A to D in each row
        /*
        Output example (n=4):
        A B C D
        A B C D
        A B C D
        A B C D
        */
        /*
        while (col <= n) {
            cout << char(letter + col - 1);
            col++;
        }
        */

        // Q-12: Print sequential characters in each row
        /*
        Output example (n=4):
        A B C D
        E F G H
        I J K L
        M N O P
        */
        /*
        while (col <= n) {
            cout << letter;
            letter++;
            col++;
        }
        */

        // Q-13: Print increasing characters starting from row number
        /*
        Output example (n=4):
        A B C D
        B C D E
        C D E F
        D E F G
        */
        /*
        int temp = row;
        while (col <= n) {
            cout << char(letter + temp - 1);
            col++;
            temp++;
        }
        */

        // Q-14: Print same character (based on row number) repeatedly per row
        /*
        Output example (n=4):
        A
        B B
        C C C
        D D D D
        */
        /*
        while (col <= row) {
            cout << char(letter + row - 1);
            col++;
        }
        */

        // Q-15: Print sequential characters in increasing count per row
        /*
        Output example (n=4):
        A
        B C
        D E F
        G H I J
        */
        /*
        while (col <= row) {
            cout << letter;
            letter++;
            col++;
        }
        */

        // Q-16: Print increasing characters starting from row letter
        /*
        Output example (n=4):
        A
        B C
        C D E
        D E F G
        */
        /*
        char temp = (letter + row - 1);
        while (col <= row) {
            cout << temp;
            temp++;
            col++;
        }
        */

        // Q-17: Print increasing characters starting from adjusted row letter
        /*
        Output example (n=4):
        D
        C D
        B C D
        A B C D
        */
        /*
        char temp = (letter + n - row);
        while (col <= row) {
            cout << temp;
            temp++;
            col++;
        }
        */

        // Q-18: Print pyramid of stars with spaces
        /*
        Output example (n=4):
           *
          **
         ***
        ****
        */
        /*
        // space
        int space = n - row;
        while (space) {
            cout << " ";
            space--;
        }
        // star
        while (col <= row) {
            cout << "*";
            col++;
        }
        */

        // Q-19: Print decreasing number of stars per row
        /*
        Output example (n=4):
        * * * *
        * * *
        * *
        *
        */
        /*
        while (col <= (n - row + 1)) {
            cout << " * ";
            col++;
        }
        */

        // Q-20: Print inverted triangle of stars with leading spaces
        /*
        Output example (n=4):
        ****
         ***
          **
           *
        */
        /*
        // space
        int space = 1;
        while (space <= (row - 1)) {
            cout << " ";
            space++;
        }
        // star
        while (col <= (n - row + 1)) {
            cout << "*";
            col++;
        }
        */

        // Q-21: Print inverted triangle of row numbers with leading spaces
        /*
        Output example (n=4):
        1111
         222
          33
           4
        */
        /*
        int space = 0;
        while (space < (row - 1)) {
            cout << " ";
            space++;
        }
        while (col <= (n - row + 1)) {
            cout << row;
            col++;
        }
        */

        // Q-22: Print triangle of row numbers with trailing spaces
        /*
        Output example (n=4):
           1
          22
         333
        4444
        */
        /*
        int space = n - row;
        while (space) {
            cout << " ";
            space--;
        }
        while (col <= row) {
            cout << row;
            col++;
        }
        */

        // Q-23: Print increasing numbers with leading spaces
        /*
        Output example (n=4):
        1234
         234
          34
           4
        */
        /*
        int space = 1;
        while (space < row) {
            cout << " ";
            space++;
        }
        int temp = row;
        while (col <= (n - row + 1)) {
            cout << temp;
            temp++;
            col++;
        }
        */

        // Q-24: Print triangle of numbers with sequential count and spaces
        /*
        Output example (n=4):
           1
          23
         456
        78910
        */
        /*
         int space = n - row;
         while (space) {
             cout << " ";
             space--;
         }
         while (col <= row) {
             cout << count;
             count++;
             col++;
         }
         */

        // Q-25: Print pyramid of numbers with mirrored digits
        /*
        Output example (n=4):
           1
          121
         12321
        1234321
        */
        /*
        int space = n - row;
        while (space) {
            cout << " ";
            space--;
        }
        while (col <= row) {
            cout << col;
            col++;
        }
        int col2 = row - 1;
        while (col2) {
            cout << col2;
            col2--;
        }
        */

        // Q-26: Print mirrored pattern of numbers with stars in between
        /*
        Output example (n=4):
        1 2 3 4 4 3 2 1
        1 2 3 * * 3 2 1
        1 2 * * * * 2 1
        1 * * * * * * 1
        */

        while (col <= (n - row + 1))
        {
            cout << " " << col << " ";
            col++;
        }
        int col2 = 2 * (row - 1);
        while (col2)
        {
            cout << " * ";
            col2--;
        }
        int col3 = n - row + 1;
        while (col3)
        {
            cout << " " << col3 << " ";
            col3--;
        }

        cout << endl;
        row = row + 1;
    }
}