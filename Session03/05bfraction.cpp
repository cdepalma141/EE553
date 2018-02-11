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

    void print() const { // const here means methed is READONLY
        cout << num << '/' << den; //' ' does one letter without nul
    }
        Fraction add(Fraction right) const {
        return Fraction (num*right.den + right.num*den, den*right.den);

    }
    Fraction operator + (Fraction right) {
        Fraction(num * right.den + right.num * den, den * right.den);
    }

};

int main(){
    Fraction a(1,2); // 1/2
    //const Fraction a(1,2); const in front of declaration says the value shouldnt change
    Fraction b(1,3); // 1/3
    Fraction c(6,4); // 6/4
    // Fraction d(6,0); // ??? Figure out what to do when someone puts in bad data
    // think about how to do this later dont let object state become bad


    Fraction e = a.add(b);

    Fraction k = a + b;
    //Fraction f = a * b;
    //Fraction f2 = a + b * c; // precedence is the same
    //Fraction g = -a;
    e.print();
    k.print();

    //only five operators that cannot be overridden ?:, sizeof, ...

}