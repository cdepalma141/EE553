//
// Created by Connor DePalma on 3/5/18.
//

#include <iostream>


using namespace std;


class A{

};

class B{
public:
    B(int x) {}


};





int main(){
    int x; // declaration (also definition)
    A a1; // how big? NOT ZERO
    A a2; // objects need unique identity so they cant be size 0
    B b1; //doenst have matching constructor
    B b2(10);
    B b3(10.5); // auto truncates to int
    B b4(2,3); // WRONG number of parameters

}