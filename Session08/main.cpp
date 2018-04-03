#include <iostream>

using namespace std;

class A {
public:
    A(int x){cout << "sup";}
    A (){

     cout << "Hello!";
    }

    ~A(){
     cout << "goodbye";

    }

    void f() {

        cout << "hi";
    }

};

class B : public A {
public:
    B(int x) : A(3) {cout << "hey";}

    ~B(){cout << "bye";}



};





int main() {

    A a1;
    a1.f();
    B b1(3);




}
