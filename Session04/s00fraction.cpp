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
    //Fraction a;
    Fraction() : num(0), den(1){ //0/1 = 0 need to intialize and not be random


    }

    //Fraction e(5)
    Fraction(int n) :num(n), den(1){ // 5/1




    }

    // const Fraction b(1,3);
    Fraction(int n, int d) : num(n), den(d) { //syntax for initializing const variables for CONSTRUCTORS ONLY with :

    }

    //const Fraction c = a.add(b);
   Fraction add(const Fraction r) const {// const after fuction is promise not to change a
        //left hand side = this and right hand is "r"
        return Fraction(num*r.den+r.num*den, den*r.den);
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
        s << num << '/' <<den;
    }
    Fraction neg() const {
        return Fraction(-num,den);
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
    const Fraction c = a.add(b);
    const Fraction d = c.neg();
    d.print();
    Fraction e(5);
    //cout << d;



}