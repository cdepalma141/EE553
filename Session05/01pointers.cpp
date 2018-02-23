//
// Created by Connor DePalma on 2/21/18.
//

#include <iostream>


using namespace std;







int main() {


    int a; // order of variables in memory is not guaranteed but order is going down because of stack
    cout << &a <<'\n'; //address of a

    int b = 2;
    cout << &b <<'\n'; //address of a

    const int d = 54;
    double x[10];
    cout << x << '\n'; // name of array is pointer to start of array

    int *p; //p is a pointer to int//prob an error it is looking at a random memory location

    int* q = &a; //q points to a
    int *a, b; //does not work, a is pointer to int and b is int// use separate lines

    //look at his shit lol



}