//
// Created by Connor DePalma on 4/23/18.
//

#include <iostream>
using namespace std;

template<typename Precision>
class Vector {
private:
    Precision x , y , z;

public:

    Vector(Precision x, Precision y, Precision z) : x(x), y(y), z(z) {}

    Vector(const Vector& orig) : x(orig.x), y(orig.y), z(orig.z) {}

    Vector& operator = (const Vector& orig) {
        x=(orig.x); y=(orig.y); z=(orig.z);
        return *this;
    }

//    bool operator ==(const Vector& b) {
//        return x == b.x && y== b.y &&z == b.z;
//    }
//    given ^^^
};

template<size_t size>
class Stack{
private:
    //int*s;
    int s[size]; // cleaner but bigger obj and wont grow, preallocates value (1024)
    int capacity;
    int sp;
public:
    Stack(){
        s = new int[1024];
        capacity = 1024;
        sp = 0;

    }
    void push(int v) {
        s[sp++] = v;


    }
    int pop() {}
    bool isEmpty() const {return ;}
};

int main() {
    Vector<double> a;
    Vector<float> b;
    Vector<int> c;
    Vector<long double> d;

    Vector<double> a2 = a; // copy constructor

}