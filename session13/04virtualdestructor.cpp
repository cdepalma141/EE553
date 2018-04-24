//
// Created by Connor DePalma on 4/23/18.
//
#include <vector>
using namespace std;

class Shape {
public:
    virtual void draw() const = 0; // virtual function makes size 8 bytes, no matter how many more still 8 bytes
    virtual ~Shape() = 0; // call apropriate constructor for specific child
};

class Sphere : public Shape {
private:
    double *p;
public:
    Sphere(double r) : r(r) {
        p = new double[1000];
    }
    ~Sphere() { // can say virtual but doesn't do anything
        delete [] p;
    }
    void draw() const override  {} // modifier that checks to make sure you are overriding function with same name in parent class
};

int main(){

    vector<Shape*> shapes;
    for (auto s : shapes){
        s->draw();
    }
    //give back memory
}