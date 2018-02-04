/*

 HW1a - 3n+1 conjecture

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#include <iostream>
using namespace std;

int main() {

    int a = 0;



    cout << "Please pick a number \n";

    cin >> a;

    while (a != 1){

        if ((a%2) == 1) {

            a = a*3+1;

        }

        else {
            a = a/2;
        }

    }

    cout << "Final Value: " << a << '\n';

    return 0;
}