/*

 HW3c - RobotLocationEstimator

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */
#include<iostream>
#include <cmath>
#include <fstream>
#include <sstream>


using namespace std;

void polar2Rect(double r, double theta, double& dx, double& dy){
    const long double PI = 3.141592653589793238L;

    theta += 90;

    theta *= PI/180;

    dx = r*(-cos(theta));
    dy = r*sin(theta);

}



using namespace std;

int main() {

    double x = 0;
    double y = 0;
    double b = 0;
    double c = 0;

    ifstream a("hw3c.dat");

        string s;
        while (!a.eof()){
            getline (a, s);
            istringstream values(s);
            double r, theta;

            values >> theta >> r;

            if (theta < 0 || r < 0){
                return 0;
            }
            else {
                b = x;
                c = y;

                polar2Rect(r, theta, x, y);

                x += b;
                y += c;

                cout << x << '\t' << y << '\n';
            }

        }



}