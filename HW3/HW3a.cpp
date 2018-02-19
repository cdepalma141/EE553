/*

 HW3a - Complex

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#include <iostream>

using namespace std;

class Complex {

private:
    double real, complex;

public:

    Complex (double r = 0, double c = 0) : real(r), complex(c) {

    }

    Complex operator+(const Complex r)  const {
        return Complex (this->real + r.real, this->complex + r.complex);

    }

    Complex add(const Complex r) const {
        return Complex (this->real + r.real, this->complex + r.complex);
    }

    Complex operator-() const {
        return Complex (-real, -complex);
    }

    void print() const {
        cout << real << " + " << complex << 'i' << '\n';
    }



};



int main() {
    const Complex a(1.0, 2.0); // create a complex number with real=1.0 imag=2.0
    const Complex b(0.5, 0.0); // real = 0.5, imag = 0.0
    const Complex c = a + b;   // overload operator + using the first syntax we discussed
    c.print(); // should print the following to cout: (1.5,2.0)
    // (member syntax).  Should look the same as method add where the name add
    // is replaced by operator +
    const Complex d = a.add(b); // this should be the same as the above except the name
    d.print();
    Complex e = -d;
    e.print();
}