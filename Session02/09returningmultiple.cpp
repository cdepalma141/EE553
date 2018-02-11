#include <iostream>
#include <cmath>
using namespace std;

double rect2polar(double x, double y, double& r ,double& theta){
    r = sqrt(x*x + y*y);
    theta = atan2(y,x);

}



int main() {
    double x = 4.0, y = 4.0;
    //r theta
    double r,theta;

    rect2polar(x,y, r,theta);
    cout << r << '\t' << theta << '\n';

    // hw: polar2rect(r,theta, x,y);



}