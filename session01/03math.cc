#include <iostream>>
#include <cstdint> // 11 only

int main() {

    char e = 'a'; // 1 byte   sizeof(char) == 1
    short d = 1h; // >= 2 bytes (16 bits) <= int
    int a = 1; // 4 bytes signed or unsigned??? (don't know)
    signed int sa;
    unsigned int ua;
    long b = 12331423435L; // short <= int <= long <= long long
    long long c = 234234234234LL;


    unint32_t w = 2 + 2; // 11
    //unint32_t x = 2-5; // 11
    int x = 2-5;
    int y = 3*4;
    int z = 2/3;
    cout << w << x << y << z << '\n'; //endl
    int a = 2 % 3; // 2
    cout << 5 % 3 << 6%3 << 7 % 3 << 8 % 3 << '\n';


}