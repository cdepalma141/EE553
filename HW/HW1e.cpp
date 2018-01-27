/*

 HW1e Read in number and compute n factorial

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

/*
 In order to be able to see past 5 decimal places when using double I use setprecision() from the iomanip library.
 I found this on a cplusplus.com forum.

 otherwise all of my answers involved powers of ten (10! = 3.6288e+06)

 */



#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int a = 0;
    int i = 0;
    double f = 1;
    double g = 1;
    double d = 1;
    double s = 1;



    for(int w = 0; w <= (10-1); w++){

        g = g*(10-w);


    }

    cout << "10! is:" << setprecision(15) << g <<'\n';

    for(int t = 0; t <= (20-1); t++){

        d = d*(20-t);


    }

    cout << "20! is:" << setprecision(15) << d <<'\n';

    for(int q = 0; q <= (30-1); q++){

        s = s*(30-q);


    }

    cout <<  "30! is:" << setprecision(15) << s<<'\n';



    cout << "Try any number: \n";
    cin  >> a;

    for(i; i <= (a-1); i++){

        f = f*(a-i);


    }

    cout << a << "! is: " << setprecision(15) << f;

}
