/*

 HW2a - Windchill

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#include<iostream>
#include<cmath>



using namespace std;

double WC(double T, double V){

    double Windchill = 35.74 + (0.6215*T) - (35.75*pow(V, 0.16)) + (0.4275*T*pow(V, 0.16));

    return Windchill;

}


int main() {
    int count = 1;
    for (int j = 5; j <= 60; j += 5) {
        for (int i = 40; i >= -45; i -= 5) {
            if (count <= 18) {
                cout << lround(WC(i, j)) << "  ";
           } else if (count > 18) {
               count = 1;
            }
        }
        count++;
        cout << '\n';
    }
}