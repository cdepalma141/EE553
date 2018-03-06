//
// Created by Connor DePalma on 3/5/18.
//
#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int n, int d) : num(n), den(d) {}

Fraction operator *(Fraction a, Fraction b){

    return Fraction(a.num*b.num,a.den*b.den);

}

 std::ostream& operator <<(std::ostream& s, Fraction a){
    return s << a.num << '/' << a.den;
}
