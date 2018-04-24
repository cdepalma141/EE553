//
// Created by Connor DePalma on 4/23/18.
//
class A {
    friend class X; // class X has access to ALL of A
private:
    int x;
protected:
    int y;
    void f();

public:
    int z;
    void g();
    A(int x) : x(x), y(0), z(3) {}


};

class B : public A { // public in A -->> public in B
   // private in A is INSIDE B, but we cant see it (invisible)
   //protected in A is still protected all the way down the inheritance
public:
    void h() {
        h();
    }
    B() : A(2) {}
};

class C : public B {
public:
    void k() {
        f();
    }
};

int main() {
    B b1;
    b1.g();
    b1.f();//protected, only children can see g() not in main

}