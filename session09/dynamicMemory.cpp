//
// Created by Connor DePalma on 3/26/18.
//

#include<iostream>

using namespace std;






class A {
public:
    A(){p = new int[n];}

    ~A() {delete [] p;}



};

int main(){

    int x[5]; //size = 20bytes

    int n;

    cin >> n;

   // int y[n]; //this used to be illegal

   // int z[n][10]; // can work
    // int z[n][n]; // can't work

    int *y = new int[n]; // allocate a block of n elements (uninitiallized)


    //delete [] y; // can run out of space in some cases if you dont use this


    int*p = new int;

    delete p;


    int*q = malloc(1024*sizeof(int)); //old c

    free(q); //old c

}