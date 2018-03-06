//
// Created by Connor DePalma on 3/5/18.


#pragma once

#include <iostream>

class Fraction {

private:

    int num, den;

public:

    Fraction(int n, int d);

    friend Fraction operator *(Fraction a, Fraction b);

    friend std::ostream& operator <<(std::ostream& s, Fraction a);

};