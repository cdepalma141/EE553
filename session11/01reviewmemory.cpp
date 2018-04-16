//
// Created by Connor DePalma on 4/15/18.
//

#include <iostream>
#include <memory.h>
using namespace std;

int main(){
    int a = 2;
    int* p = &a;

    cout << a << '\n';
    cout << *p << '\n'; // print what p is pointing to

    // cant delete what not allocated with new : delete p;

    int *q = new int [1024]; // using new

    delete [] q;
    // can't delete twice :delete []q;

    int* r =  malloc(1024*sizeof(int));
    free (r);






}
