#include <iostream>

using namespace std;

class a;


class fraction {

private:
    int num, den;

public:

    fraction (int n = 0, int d = 1) : num(n), den(d) {}

    fraction add(fraction a) const {
        return fraction(num*a.den+den*a.num,den*a.den);
    }

    friend fraction operator +(fraction a, fraction b) {

        return fraction(a.num*b.den+b.num*a.den, a.den*b.den);
    }

    fraction operator -() const {
        return fraction(-num,den);

    }



    void print() const {

        cout << num << '/' << den << '\n';
    }

    friend ostream& operator <<(ostream& s, fraction a){
        return s << a.num << '/' << a.den << '\n';

    }


};



int main() {

    const fraction a(1,3);
    const fraction b(4,7);

    const fraction z = a.add(b);

    const fraction c = a + b;

    const fraction d = -a;

    a.print();

    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
    cout << z << '\n';

}