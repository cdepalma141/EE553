/*

 HW1c sum the numbers from 1 to 100.

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */
#include <iostream>

using namespace std;

int main() {

    int a = 100;

    a = (a*(a+1))/2;

    cout << "Using the Gauss formula: " << a << '\n';


    int sum = 0;

    for (int i = 1; i <= 100; i ++){

        sum += i;
    }


    cout << "Using a loop: " << sum;

    return 0;
}