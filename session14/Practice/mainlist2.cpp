//
// Created by Connor DePalma on 5/6/18.
//

#include "List2.h"
#include <iostream>
using namespace std;




int main() {
try {
    List2<double> a(1);

    a.add(3.5);

    a.add(4);

    a.add(6.7);

    a.add(3.5);

    a.add(4);

    a.add(3);


#if 0
    cout << a << '\n';

    a.rem();

    cout << a << '\n';

    a.addF(5);


    cout << a << '\n';

    a.remF();
#endif

    cout << a.checkUsed()<< '\n';
    cout << a << '\n';


}


catch(int b){
    cout << "too many values: " << b;
}



}