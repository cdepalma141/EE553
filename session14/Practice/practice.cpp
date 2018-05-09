//
// Created by Connor DePalma on 5/6/18.
//

#include <iostream>

using namespace std;

template <typename T>
class Fraction{
private:
    T num, den;

public:

    Fraction(T n = 0, T d = 1) : num(n), den(d) {

        if(d ==0){
            throw 999;
        }
    }

    Fraction operator +(const Fraction& a) const{
        return Fraction(num*a.den+den*a.num, den*a.den);
    }

    friend ostream& operator <<(ostream& s, const Fraction& a){
        return s << a.num << '/' << a.den << '\n';
    }

};















int main(){

    try{
        Fraction<double> a(1.5,2);
        Fraction<double> b(1,0);

        cout << a + b;


    }





    catch(int a){
        cout << "Divide by 0\nError " << a;
    }


}