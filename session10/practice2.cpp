//
// Created by Connor DePalma on 4/15/18.
//

#include <iostream>
#include "listPrac.h"
using namespace std;
int main(){

    List a(10);
    List b(20);

    a.add(4);
    cout << a << '\n';
    b.add(6);
    b.add(5);
    b.add(7);
    b.addFront(3);
    b.remove();
    b.removeFront();
    b.addFront(9);
    cout << b << '\n';

    a = b;

    cout << a << '\n';




}