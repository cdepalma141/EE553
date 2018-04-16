// Example program
#include <iostream>
#include <vector>
using namespace std;

class Shape {
protected:
double l, w, r;
public:
Shape(double l = 0, double w = 0) : l(l), w(w) {}

virtual double area() const = 0;
};

class Circle : public Shape {
public:
    Circle(double l) : Shape(l) {}
    double area() const {
        return l*l*3.14159;
    }
    
};

class Rect : public Shape {
public:
    Rect(double l, double w) : Shape(l,w) {}
    
    double area() const {
        return l*w;
    }
};
int main()
{
  vector<Shape*> Shapes;
   Shapes.push_back(new Rect(3,4));
  Shapes.push_back(new Circle(5));
  
 cout << Shapes[0]->area();
 cout << '\n' <<Shapes[1]->area();
  
}
