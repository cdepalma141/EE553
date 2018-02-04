#include <iostream>
#include <cmath>
using namespace std;

inline double sq(double x){return x*x;}


double hypot(double a, double b){
    return sqrt(a*a + b*b);

}

double dist(double x1, double y1, double x2, double y2){
    return sqrt( sq(x1-x2) + sq(y1-y2));

}


double factorial(int n){
    double prod = 1;

    for(int i = 1; i <= n; i++){
        prod *=i;

      // return value should be same as function data type
    }
    return prod;
}

double choose(int n, int r){
    return factorial(n) / (factorial(r)*(factorial(n-r)));



}


int main(){
    cout << hypot(3.0,4) << '\n';
    cout  << factorial(5) << '\n';
    cout  << factorial(10) << '\n';
    cout  << factorial(50) << '\n';
    cout  << factorial(60) << '\n';
    cout << choose(52, 6) << '\n'; //n!/ (r!(n-r)!)
    cout << choose(52, 6) << '\n'; //n!/ (r!(n-r)!) // this will not work without cancellation


}