//
// Created by Connor DePalma on 3/19/18.
//

#include <iostream>
using namespace std;

void g();

void f(){

    g();
}



//exception class
class DivByZero {



};



class Fraction {
private:
    int num,den;

public:
    Fraction(int n, int d) : num(n), den(d) {
        if(d==0) {
            throw DivByZero();

        }

    }



};

void g(){

    Fraction d(1,0);
}

int main(){
   try {
       Fraction a(1, 2);
       Fraction b(1, 3);
       //Fraction c = a + b;
       //Fraction d(1, 0); // nope  Don't let us create a bad object
       f();
       Fraction e(1, 2);
       // Fraction f = d + e; //shouldnt be able to do this
   }
    catch (DivByZero e) {
        cout << "Div by zero \n";

    }


}