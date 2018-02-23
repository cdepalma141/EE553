//
// Created by Connor DePalma on 2/21/18.
//

#include <iostream>

using namespace std;


void f(int x ) { cout << x; x = 0;}
void g(int& x ) { cout << x; x = 0;}
void h(int x ) { cout << x; x = 0;}

int main(){


    int a = 2;

    const int b = 3;

    int& r = a; //changing r changes a

    cout << &r << '\t' << &a << '\n';

    cout << sizeof(r) << '\t' << sizeof(a) << '\t';

   // int& r2 = b; // cant do cuase b const and r2 isnt const

    const int& r2 =b;
    cout << r2 << '\n';


    int *p = &a;

    cout << p << '\t' << &a << '\n';

    cout << &p << '\n';
    f(a);
    cout << a << '\n';
    g(a);
    cout << a << '\n';
    h(&a);



}