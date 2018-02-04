//
// Created by Connor DePalma on 1/29/18.
//

#include <iostream>

using namespace std;

int main(){
    cout << 1 * 365 * 24 * 60 * 60 << '\n';
    cout << 20 * 365 * 24 * 60 * 60 << '\n';
    cout << 24 * 60 * 60 << '\n';
    cout << 69L * 365L * 24L * 60L * 60L << '\n';
    int a = 2;
    float b = a + 0.5; //2.5 conversion to float
    int c = b; // c == 2
    int d = int (b);
    double e = 69*365*24*60*60;// can go to 1.2e+300 but will do calculation as integer first and get it wrong
    cout << e << '\n'; // double can hold the most, long can go to roughly 18 digits accurately.


}