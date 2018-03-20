//
// Created by Connor DePalma on 3/19/18.
//

#include <iostream>
using namespace std;
class Ex {
private:
    int linenum;
    const char * filename;
public:
    Ex(int linenum, const char* filename) : linenum(linenum), filename(filename){}


    friend ostream& operator<<(ostream& s, const Ex& a) {
        return s << a.filename << ": "<< a.linenum;
    }


};

//exception class
class DivByZero : public Ex {
public:
    DivByZero(int linenum, const char* filename) : Ex(linenum, filename){}
    friend ostream& operator<<(ostream& s, const DivByZero& a) {
        return s << "Div by zero " << (Ex&)a;
    }
};



class Fraction {
private:
    int num,den;

    int gcd(int a, int b){
        if (b==0)
            return a;
        return gcd(a, a%b);
    }

public:
    Fraction(int n, int d) : num(n), den(d) {
        if(d==0) {
            throw DivByZero(__LINE__,__FILE__);

        }

        int g = gcd(n,d);
        if (g > 1) {
            num/= g;
            den /= g;
        }

    }

    friend Fraction operator +(Fraction a, Fraction b) {
        return Fraction(a.num*b.den+a.den*b.num, a.den*b.den);
    }

    friend Fraction operator /(Fraction a, Fraction b) {
        return Fraction(a.num*b.den,b.num*a.den);
    }


};



int main(){
    try {
        Fraction a(1, 2);
        Fraction b(1, 2);
        Fraction c = a + b;
        Fraction d(0, 1); // nope  Don't let us create a bad object
        Fraction e = c/d;

    }
    catch (DivByZero e) {
        cout << e;

    }


}