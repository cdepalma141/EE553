/*

 HW3b - Second Version of Complex

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

	friend Complex operator+(Complex a, Complex b) {
		return Complex ( a.real + b.real , a.complex + b.complex);

	}

	friend Complex operator-(Complex a) {
		return Complex (-a.real, -a.complex);
	}

	friend ostream& operator<< (ostream& s, Complex a){
        s << a.real << " + " << a.complex << 'i';
        return s;
    }

};

int main() {
	const Complex a(1.0, 2.0); // create a complex number with real=1.0 imag=2.0
	const Complex b(0.5, 0.0); // real = 0.5, imag = 0.0
	const Complex c = a + b;   // overload operator + using friend
	Complex d = -c; // use friend
	cout << c << '\t' << d << '\n';
}