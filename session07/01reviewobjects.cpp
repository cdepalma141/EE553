//
// Created by Connor DePalma on 3/5/18.
//

#include <iostream>


using namespace std;


class A{

public:
    void f(){cout << "yo!";} // not const so can be changed, should be const

};


int main(){
    A a1;           // all legal except last one
    A a2();             // a2 is a function that returns A
    A* p;
    const A* q;         // A can change but q cannot change A
    //A* const r;    // r cannot change, must be initialized
    a1.f();
    p = &a1;
    p->f();
    q = &a1;
    a2.f();         // this is illegal but the declaration is legal





}