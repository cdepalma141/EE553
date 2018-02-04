//
// Created by Connor DePalma on 1/29/18.
//

#include <iostream>

using namespace std;

double f(double x); // function prototype

// functions called most often should be inlined and only if it will make things faster

int main(){

    cout << f(2.0) << '\n'; // replaced the function with what the equation was
    cout << f(2) << '\n';


}