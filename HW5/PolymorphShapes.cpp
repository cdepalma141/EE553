/*

 Polymorphism: Shapes

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#include <iostream>

using namespace std;

class Shape {

protected:
    double height;
    double width;

public:

    Shape(double w = 0, double h = 0) : width(w), height(h) {}

    virtual double perimeter() const = 0;

    virtual double area() const  = 0;


};

class Rect : public Shape {

public:

    Rect(double width, double height) : Shape(width, height) {}

    double perimeter() const {
        return 2*width + 2*height;
    }

    double area() const {
        return width*height;
    }


};

class Circle : public Shape {
    
private:
    
    static const double PI;

public:

    Circle(double width) : Shape(width){}

    double perimeter() const {
        return 2*PI*width;
    }

    double area() const {
        return PI*width*width;
    }





};


const double Circle::PI = 3.14159265358979;








int main() {
    Rect r(5.0, 4.0);
    cout << r.area() << '\n';  // should print out 20
    cout << r.perimeter() << '\n'; // should print 18
    Circle c(2);
    cout << c.area() << '\n';  // should be pi*r2 about 12.4
    cout << c.perimeter() << '\n'; // should be 2*pi*r about 12.28
    Shape* s = &r;
    cout << s->area() << '\n'; // polymorphic call
    s = &c;
    cout << s->area() << '\n';// polymorphic call
}