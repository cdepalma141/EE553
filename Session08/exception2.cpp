//
// Created by Connor DePalma on 3/19/18.
//

#include <iostream>
using namespace std;

void g(int x, int y){

    if (y==0) {
        throw 5;
    }

}


void f(){

    g(1,0);
}

void h(){

    throw "abc";
}

int main(){
    try{
        f();
    } catch(int e){
        cout << "Error: " << e;
    }
    try{
        h();
    }catch (const char* s) {
        cout << s << '\n';
    }

}