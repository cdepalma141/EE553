//
// Created by Connor DePalma on 2/26/18.
//
#include <iostream>

using namespace std;
class A; // declaration (can have as many as you like)

class A {}; // defintion (is declaration)
extern int x; // declaration
int x; //definition

class B{

    int x;
    static int y; // declaration, not size in class
};

int B::y = 1; //defintion

int main(){

    cout << sizeof(A) << '\n'; // a class will never be less than one byte (for most but cant be 0) long other wise they're location could overlap
    cout << sizeof(B) << '\n';


}