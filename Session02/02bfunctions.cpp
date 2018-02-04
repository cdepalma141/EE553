//
// Created by Connor DePalma on 1/29/18.
//

#include <iostream>

using namespace std;

inline double f(double x){ //use g++ O3 // computation is very fast

    return x*x;
}

int f(int x) {

    return x*x;
}



int main(){



    cout << f(2.0) << '\n'; // replaced the function with what the equation was
    cout << f(2) << '\n';


}