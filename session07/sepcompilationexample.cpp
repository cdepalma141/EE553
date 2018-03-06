//
// Created by Connor DePalma on 3/5/18.
//

#include <iostream>
#include "Fraction.h" // hh is c++ h is c
using namespace std;



int main(){

    Fraction a(1,2);
    Fraction b(1,3);
    Fraction c = a*b;
    cout << c << '\n';
}