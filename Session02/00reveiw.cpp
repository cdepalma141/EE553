//
// Created by Connor DePalma on 1/29/18.
//

#include <iostream>

using namespace std:

int main(){

    int a = 1000 * 1000; // computer is 2.1 bill, Arduino is -32768 .. 32767 (cause of 0)
    int b = 15/2*2;
    int c = 3%3*3;
    int d = 2 + 3*4;
    int e = 15 / (2*2);
    // -32768 .. 32767
    // 0 .. 65535
    uint16_t a = 65534 + 2; //0


    /*
     * 0     000  0
     * 1    001  1
     * 2   010  2
     * 3     011  3
     * 4     100  -4
     * 5     101  -3
     * 6     110  -2
     * 7     111  -1
     *
     *
     *
     *
     *
     */




}