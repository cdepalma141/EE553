/*

 HW2b - Primes

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#include <iostream>

using namespace std;

bool isPrime(unsigned long long p){

    if (p%2 == 0 && p != 2)
        p = 0;

    else if (p%3 == 0 && p != 3)
        p = 0;

    else if (p%5 == 0 && p != 5)
        p = 0;

    else if (p%7 == 0 && p != 7)
        p = 0;

    else if (p ==1)
        p = 0;

    else p = 1;


    return p;
}

int main(){

    unsigned long long  a;
    cout << "Pick and Number: \n";
    cin >> a;

    if (isPrime(a) == 1)
        cout << "Prime" << '\n';

    else
        cout << "Not Prime" << '\n';

}
