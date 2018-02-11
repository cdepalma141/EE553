//
// Created by Connor DePalma on 2/5/18.
//

#include <iostream>
#include <string>

using namespace std;


int main(){
    int a; //not initiallized so garbage
    int b[] = {1,2,3}; // b[0], .... initialized
    int c[4]; // random garbage not initialized
    int d[5] = {3,2,1}; //since intialized first 3 the last two are zero in array
    int e[100] = {0}; //first is 0 and then so are the rest
    for (int i = 0; i < 3; i++)
        cout << b[i]; //prints 123 i represents position

    for (int i = 4; i >= 0; i --)
        cout << d[i]; // 00123








}