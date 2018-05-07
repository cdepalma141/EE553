//
// Created by Connor DePalma on 5/6/18.
//

#include "List.h"
#include <iostream>
using namespace std;

int main() {

    List a(1);

    a.add(3);

    a.add(4);

    a.add(6);

    cout << a << '\n';

    a.rem();

    cout << a << '\n';

    a.addF(5);


    cout << a << '\n';

    a.remF();

    cout << a << '\n';






}