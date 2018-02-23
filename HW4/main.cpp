#include <iostream>

using namespace std;

void f(int a = 1, double b = 0.0) {  }



int main(){


    f();

    f(2.5);

    f(1, 0.0);

    f(1.0, 0);

    f("a", 2);

    f(1,2,3);





}