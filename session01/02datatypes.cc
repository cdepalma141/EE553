#include <iostream>
#include <cstdint> // 11 only

int main() {

    char e = 'a'; // 1 byte   sizeof(char) == 1
    short d = 1h; // >= 2 bytes (16 bits) <= int
    int a = 1; // 4 bytes signed or unsigned??? (don't know)
    signed int sa;
    unsigned int ua;
    long b = 12331423435L; // short <= int <= long <= long long
    long long c = 234234234234LL;
    unint32_t x; // 11
    unint64_t y; // 11


}