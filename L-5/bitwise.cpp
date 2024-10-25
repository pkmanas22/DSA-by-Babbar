/* Notes
- Bitwise AND(&), OR(|), NOT(~), XOR(^), Left Shift(<<), Right Shift(>>)

# AND -> The result is 1 only if both bits are 1; otherwise, it's 0. Useful for masking bits.

ex: a = 3, b = 5
a & b ::  0011  (3)
        & 0101  (5)
          ----
          0001 = 1

# OR -> The result is 1 if either of the bits is 1; otherwise, it's 0.

a | b ::  0011  (3)
        | 0101  (5)
          ----
          0111 = 7

# NOT -> This inverts all the bits of the number. If you are working with signed integers, the most significant bit (MSB) is used for sign, which is why you get a negative number when applying NOT to a positive number.

~a = ~3 ::  000...0011
          ~ 111...1100 (-ve number)
   2's comp 000...0011
        +            1
        ---------------
            000...0100 = -4
 
# XOR -> The result is 1 if the bits are different, and 0 if they are the same. It's useful for toggling bits.

a ^ b ::  0011  (3)
        ^ 0101  (5)
          ----
          0110 = 6

# Left Shift -> Shifts the bits to the left by a given number of positions, filling the rightmost positions with 0. For each shift left, it effectively multiplies the number by 2.
Note: Be cautious with large shifts, as they can overflow, turning positive numbers into negative numbers due to the sign bit.

ex: 5 << 2 -> left shift 5, 2 times
    5 << 2 :: 00...00101  << 2
              00...10100 = 20

    trick:- In must cases we multiply the digit with shift number power of 2. but some cases this isn't true.
    5 x (2^2) = 5 x 4 = 20

    0100...000 << 1
    1000...000 (-ve number)
    Thus left shift(<<) is ok for smaller numbers

# Right Shift -> Shifts the bits to the right. If the number is positive, it fills the leftmost positions with 0. If negative, it is compiler-dependent whether it fills with 0 or 1 (for signed numbers). Right shifting effectively divides the number by powers of 2 (integer division).

ex: 5 >> 2 -> right shift 5, 2 times
    5 >> 2 :: 00...00101 >> 2
              00...00001 = 1

    trick:- divide the number shift times
    5 >> 2 = 5/2 = 2/2 = 1
    17 >> 2 = 17/2 = 8/2 = 4

    Padding in << and >> for positive number is done with 0. for negative numbers it is compiler dependent
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 5;
    cout << "a & b = " << (a & b) << endl;     // 1
    cout << "a | b = " << (a | b) << endl;     // 7
    cout << "~a = " << (~a) << endl;           // -4
    cout << "a ^ b = " << (a ^ b) << endl;     // 6
    cout << "5 << 2 = " << (5 << 2) << endl;   // 20
    cout << "5 >> 2 = " << (5 >> 2) << endl;   // 1
    cout << "17 >> 1 = " << (17 >> 1) << endl; // 8
    cout << "17 >> 2 = " << (17 >> 2) << endl; // 4
    cout << "19 << 1 = " << (19 << 1) << endl; // 38
    cout << "21 << 2 = " << (21 << 2) << endl; // 84
}