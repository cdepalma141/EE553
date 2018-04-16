//
// Created by Connor DePalma on 4/15/18.
//

#include <iostream>
using namespace std;

class A { // c++ is base class object oriented is parent
public:
    void f() {cout << "a";}


};

class B :public A { // object oriented is child      also inherits from A, kind of A, C++ -> derived class
public:
    void f() {cout << "b";}
};

class C{ // virtual makes objects and inherited bigger
public:
    virtual void f() {cout << "c";}
};

class D : public C {
public:
    void f() { cout << "d"; }
};







class E{ // E is an abstract calss (obj), contains one virtual function (c++)
public:
    virtual void f() = 0;
};

class F : public E {
public:
    void f() { cout << "f";}
};

class G : public E{ // virtual makes objects and inherited bigger
public:
    virtual void f() {cout << "g";}
};


int main() {
    A a1;
    a1.f();
    B b1;
    b1.f();
    b1.A::f();
    A* p;
    p = &a1; // address of a1
    p->f();
    p = &b1;
    p->f();

    C c1;
    c1.f();
    D d1;
    d1.f();
    C* q = &c1;
    q->f(); // call is slower than just c1.f() cause it needs to check
    q = &d1;
    q-> f();

   // E e1; // abstract class, contains one pure virtual function (Can't instantiate E)

    E e2(); //function that returns E, cant do anything but is legal

    E* p2; // can ALWAYS make a pointer

   // p2 = new E(); E abstract, can't instantiate

    p2 = new F();
   // p2 = new B(); TYPE mismatch, p2 points at E and B is not derived from E
    p2-> f();
    delete p2;
    p2 = new G();
    p2->f();
    delete p2;







}