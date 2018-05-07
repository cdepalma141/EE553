//
// Created by Connor DePalma on 5/6/18.
//

#include <iostream>

using namespace std;

class A {
public:

    A() {
        cout << 'A' << '\n';
    }

    ~A(){
        cout << "~A" << '\n';
    }


    virtual void f() {
        cout << 'f' << '\n';
    }
};


class B : public A {


public:

    B() {
        cout << 'B' << '\n';
    }

    ~B(){
        cout << "~B" << '\n';
    }

    void f(){
        cout << 'g' << '\n';
    }
};

class C : public B {

public:

    C() {
        cout << 'C' << '\n';
    }

    ~C() {
        cout << "~C" << '\n';
    }

    void f(){
        cout << 'h' << '\n';
    }

    int y;

};


int main() {

    A a;
    B b;
    a.f();
    b.A::f();
    A* p = &a;
    p->f();
    p = &b;
    p->f();
    C c;
    p = &c;
    p->f();

    int C::*mp;
    mp = &C::y;
    c.*mp = 3;

    cout << c.y << '\n';






}