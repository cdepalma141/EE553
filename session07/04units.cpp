






#include <iostream>


using namespace std;



class Unit {



};


int main(){

    Unit a(5, "kg");
    Unit b(2, "m");
    Unit c(3, "second");
    Unit d(2.5, "feet");
    cout << a + b << '\n'; // error!
    Unit diamonds(1e6, "$/kg");



}