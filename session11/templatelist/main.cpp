//
// Created by Connor DePalma on 4/15/18.
//

#include "List.h"
//#include "Elephant.h"
#include <iostream>
using namespace std;
int main() {
    List<int> a(10);
    a.add(3);
    cout << a;


    List<float> b(10);
    b.add(2.5f);

    cout << b;


    List<int> c(10);
    c.add(5);
    cout << c;
    a = c;

//    cout << a;
//    List<Elephant> d;
//    d.add(Elephant("James", 5));
//    cout << d;
}
