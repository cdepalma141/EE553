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

class B : private A { // public in A --> private
    // private in A is (invisible)
    //protected in A is private
public:
    void h() {
        h();
    }
    B() : A(2) {}
};

/*
 * class B { same as class b above
 * private:
 * A hidden;
 * };
 */

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