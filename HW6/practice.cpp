#include <iostream>


using namespace std;

class A {
public:
    virtual void f() { cout << "children may override me\n"; }
};

class B : public A {
public:
    void f() { cout << "I print something different\n"; }
};



class C {
private:
    int a;
public:
    C (int b = 3) :a(b){}
    virtual void f() = 0;
};

class D : public C {
public:
     void f() { cout << "this is what I do\n"; }
};

class E : public C {
public:
     void f() { cout << " I am also a child of C\n"; }
};




int main() {

    A a1;
    B a2;
    D a4;
    E a6;

    A* list[5];

    list[0] = &a2;

    list[0]->f();

    a1.f();
    a2.f();
    a4.f();
    a6.f();





}