//
// Created by Connor DePalma on 5/7/18.
//

#include <iostream>
#include "string.h"
using namespace std;
int String::count = 0;

int main() {

    String a("abvc");

    String b("dfhg");

    String c = a + b;

    cout << c << '\n';

    b = a;

    cout << b << '\n';

    cout << String::getCount() << '\n';


}