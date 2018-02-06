#include <iostream>
using namespace std;


/*
 *
 * class     kind of object
 * object == instance (example of) of a class
 * message
 * methods
 *
 */



class Fraction {
private:         // privacy is by type not by instance (like dogs and humans)
    int num, den; // what the object "remembers"


public:
    Fraction(int n, int d)  { //constructor
        num = n;
        den = d;
    }
    friend ostream& operator <<(ostream& s, Fraction f); //friend matches function on outside and can access data
    friend Fraction operator + (Fraction left, Fraction right);
    friend Fraction operator - (Fraction a);

    void print() const { // const here means methed is READONLY
        cout << num << '/' << den; //' ' does one letter without nul
    }
    Fraction add(Fraction right) const {
        return Fraction (num*right.den + right.num*den, den*right.den);

    }

};


ostream& operator <<(ostream& s, Fraction f) { //ostream has to
        s << f.num << '/' << f.den;
    return s;
}

Fraction operator + (Fraction left, Fraction right) {
   return Fraction (left.num*right.den + right.num*left.den,left.den*right.den);

}

Fraction operator - (Fraction a) {
    return Fraction (-a.num, a.den);

}


int main(){
    Fraction a(1,2); // 1/2
    Fraction b(1,3); // 1/3
    Fraction c = a + b;
    Fraction d = -a;

    cout << c << '\t' << d << '\n';

}