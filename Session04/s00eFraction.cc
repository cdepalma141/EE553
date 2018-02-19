//
// Created by Connor DePalma on 2/12/18.
//
#include <iostream>
#include <fstream>

using namespace std;


class Fraction{

private:
    int num, den;

public:

    // const Fraction b(1,3);
    Fraction(int n = 0, int d = 1) : num(n), den(d) { //syntax for initializing const variables for CONSTRUCTORS ONLY with :

    }

    //const Fraction c = a.add(b);
    friend Fraction operator +(Fraction a, Fraction b)  {// Friend makes it act like a function instead NO CONST CAUSE NO THIS
        return Fraction(a.num*b.den+b.num*a.den, a.den*b.den); // treats parameter as objects instead of this and right
    }
    //a.setNum
    void setNum(int n){
        num = n;
    }
    void setDen(int d){
        den = d;
    }
    void print() const{ //if object doesnt change make it const
        cout << num << '/' << den;
    }
    //b.print(f)
    void print(ostream& s) const {
        s << num << '/' << den;
    }
    friend Fraction operator -(Fraction f)  { //NO CONST CAUSE NO THIS function passing makes a copy which does not affect original number
        return Fraction(-f.num,f.den);
    }

    // <<


};


int main(){
    Fraction a;
    a.setNum(1);
    a.setDen(2);
    const Fraction b(1,3);
    b.print();
    ofstream f("test.dat");
    b.print(f);
    b.print(cout);
    const Fraction c = a + b;
    const Fraction d = -c;
    d.print();
    Fraction e(5);
    //cout << d;



}