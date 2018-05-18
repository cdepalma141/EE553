#include <iostream>
#include <cstdint>
using namespace std;

int x = 0; //global variables are always initiallized to binary 0

int main() {
    cout << "hello" << '\n';

    long c; //variables on the stack (auto) are uninitialized, RANDOM


    for (int32_t i = 0; i < 1; i++)
      ;

    cout << 3 * 4 << '\n'; // '\n' goes to next line (special char)
    cout << 3 + 4 << '\n';
    cout << 3 - 4 << '\n';
    cout << 3 / 4 << '\n'; // int devision this would equal 0 and not include remainder
    cout << 3 % 4 << 4 % 4 << 5 % 4 << '\n'; // % is remainder
    cout << -3 % 4 << -4 % 4 << -5 % 4 << '\n'; // negative is negative remainders

    cout << 2 + 3 * 4 << '\n'; // follows PEMDAS
    cout << 2/3*3+1/2*2 <<'\n';
    cout << 2*3/3+1*2/2 <<'\n';
}
