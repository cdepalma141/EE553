//
// Created by Connor DePalma on 1/29/18.
//

#include <iostream>

using namespace std;

void hello(){  //nothing is returned with void it only does the thing its made to do

    cout << "hello";


}
void test(int a){  //nothing is returned with void

   for (int i = 0; i < a; i++) {
       cout << "a";
   }

}

//f(x) = x*x
//small functions are expensive, a lot of work with stack when using functions

double f(double x ){ //need to say type that goes in and type that is returned

    return x*x;
}

inline double g(double x ){ //inline is used to say do the thing where you say to do it right when you ask for it

    return x*x;
}


int main(){

    hello();
    test(5);
    cout << f(2.0) << '\n';
    cout << g(2.0) << '\n';


}