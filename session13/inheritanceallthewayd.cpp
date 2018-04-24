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

class B : protected A { // public in A --> protected
    // private in A is (invisible)
    //protected in A is protected
public:
    void h() {
        f();
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

    A*p = new B(); // only in public inheritance
    p->g();

}