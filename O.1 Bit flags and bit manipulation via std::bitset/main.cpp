#include <iostream>
#include "first.h"
#include <bitset> // for std::bitset

using namespace std;

int main()
{
    cout << "Hello World" << '\n';

    /*-------
    Bit flags
    -------*/

    int foo { 5 }; // assing foo the value 5 (probably uses 32 bits of storage)

    bitset<8> mybitset {}; // 8 bits in size means room for 8 flags

    /*-------------------------------
    Manipulating bits via std::bitset
    --------------------------------*/

    bitset<8> bits{ 0b0000'0101 }; // we need 8 bits, start with bit pattern 0000 0101
    bits.set(3); // set bit position 3 to 1 (now we have 0000 1101)
    bits.flip(4); // flip bit 4 (now we have 0001 1101)
    bits.reset(4); // set bit 4 back to 0 (now we have 0000 1101)
 
    cout << "All the bits: " << bits << '\n';
    cout << "Bit 3 has value: " << bits.test(3) << '\n';
    cout << "Bit 4 has value: " << bits.test(4) << '\n';

    return 0;
}