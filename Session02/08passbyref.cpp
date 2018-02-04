#include <iostream>

using namespace std;

void f(int x){
    cout <<x;
    x += 5;
}

void g(int& x){ // this will change x's value when using &, passing by reference
    cout << x;
    x += 5;


}


int main(){
    int a = 3;
    f(a); // 3
    f(a); // 3 parameters by VALUE (copy), wont change original input value
    f(4); // notice 4 does not change!!
    g(a); // 3 but now a = 8
    g(a); // 8 now a = 13

}