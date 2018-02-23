/*

 HW4a - Vec3d

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#include <iostream>
#include<cmath>
using namespace std;

class Vec3d {

private:

	double p1, p2, p3;

public:
	Vec3d (double a = 0, double b = 0, double c = 0) : p1(a), p2(b), p3(c) {}

    friend double dot(Vec3d a, Vec3d b);

	Vec3d operator+(const Vec3d a) const {return Vec3d (p1+a.p1,p2+a.p2,p3+a.p3);}

    Vec3d operator-(const Vec3d a) const {return Vec3d (p1-a.p1,p2-a.p2,p3-a.p3);}

    Vec3d operator-() const { return Vec3d (-p1, -p2, -p3);}

    double dot(Vec3d a) const {return (a.p1*p1 + a.p2*p2 + a.p3*p3);}

    double mag() const {return sqrt(p1*p1 + p2*p2 + p3*p3); }

    double magSq() const {return (p1*p1 + p2*p2 + p3*p3);}

    double dist(const Vec3d a) const {return sqrt((p1-a.p1)*(p1-a.p1) + (p2-a.p2)*(p2-a.p2) + (p3-a.p3)*(p3-a.p3));}
	
	friend ostream& operator << (ostream&s, Vec3d a) {
	s << '(' << a.p1 << ", " << a.p2 << ", " << a.p3 << ')';
	return s;
	}

    static double dot(Vec3d a, Vec3d b){
        return a.p1*b.p1 + a.p2*b.p2 + a.p3*b.p3;

    }

};

double dot(Vec3d a, Vec3d b){
   return a.p1*b.p1 + a.p2*b.p2 + a.p3*b.p3;
}




int main() {
	// use friend operators
	const Vec3d a(1.0,2.5,3.5); // double precision!
	const Vec3d b(2.0);         //(2,0,0)
	const Vec3d c(2.0,3.5);     //(2,3.5,0)
	//const Vec3d d(); // d is a function that returns Vec3d
	const Vec3d e;
	const Vec3d f = a + e;
	const Vec3d g = b - c; // d is not an object, pick a different one
	double x = dot(f, g); // regular function
	double y = Vec3d::dot(f,g); // static function
    double z = f.dot(g); // method
   	const Vec3d h = -b;

	double dist = f.mag(); // square root of sum of square
	double dist2 = f.magSq(); // sum of square
	double dist3 = f.dist(g); // sqrt or sum of square of diff

    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << e << '\n';
    cout << f << '\n';
    cout << g << '\n';
    cout << x << '\n';
    cout << y << '\n';
    cout << z << '\n';
    cout << h << '\n';
    cout << dist << '\n';
    cout << dist2 << '\n';
    cout << dist3 << '\n';
}


