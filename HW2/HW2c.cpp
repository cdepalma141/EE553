/*

 HW2e - Functions

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


int countPrimes(unsigned long long a, unsigned long long b){

    int count = 0;

    for (a; a <= b; a++){
        if (isPrime(a) == 1)
            count ++;

    }

return count;

}


int main(){
    unsigned long long a,b;

    cout << "Input first number in range [a,b]: \n";
    cin >> a;
    cout << "Input last number in range; \n";
    cin >> b;

    cout << "There are " << countPrimes(a,b) << " prime numbers in that range" << '\n';




}
