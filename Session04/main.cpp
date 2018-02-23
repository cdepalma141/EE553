


#include <iostream>
#include <fstream>
using namespace std;

class Fraction {
private:
    int num, den;
public:
    Fraction(int n = 0, int d = 1) : num(n), den(d) {
    }

    //		const	Fraction c = a.add(b);
    Fraction operator +( const Fraction r) const {
        // left hand side = this
        return Fraction(num*r.den + r.num * den, den*r.den);
    }

    //		a.setNum(1);
    void setNum(int n) {
        num = n;
    }

    void setDen(int d) {
        den = d;
    }

    void print() const {
        cout << num << '/' << den << '\n';
    }
    //			b.print(f);
    void print(ostream& s) const {
        s << num << '/' << den << '\n';
    }
    //		const Fraction d = c.neg();
    Fraction	operator -() const {
        return Fraction(-num,den);
    }
};

int main() {
    const Fraction a(1,2);
    //a.setNum(1);
   // a.setDen(2);
    const Fraction b(1,3);
    b.print();
    ofstream f("test.txt");
    b.print(f);
    Fraction c = a + b;
    //		...		b.add(a);
    const Fraction d = -c;
    d.print();
    Fraction e(5);
    //		cout << d;
}