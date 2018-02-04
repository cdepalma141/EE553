/*

 HW1d Sum reciprocals

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */


/*
 In order to be able to see past 5 decimal places when using float or double I use setprecision() from the iomanip library.
 I found this on a cplusplus.com forum.

 Without this, while I could see whether float or double was more accurate when subtracting, I would get the same exact value
 for the sums when either using float or double.
 */



#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float sum1 = 0;
    double sum1d = 0;

    for (float i = 1; i <= 100; i ++){

        sum1 += 1.0f/i;
    }

    for (double i = 1.0; i <= 100; i ++){

        sum1d += 1.0/i;
    }

    cout << "Sum float summation increasing: " << setprecision (7) << sum1 <<'\n';
    cout << "Sum double summation increasing: " << setprecision (15) << sum1d << "\n";

    float sum2 = 0;
    double sum2d = 0;


    for (float i = 100; i >= 1; i--){

        sum2 += 1.0f/i;
    }

    for (double i = 100.00; i >= 1; i--){

        sum2d += 1.0/i;
    }


    cout << "Sum float summation decreasing: " << setprecision (7) << sum2 <<'\n';
    cout << "Sum double summation decreasing: " << setprecision (15) << sum2d << "\n";


    cout << "Difference as Float: " << setprecision (7) << sum1 - sum2 << '\n';

    cout << "Difference as Double: " << setprecision (15) << sum1d - sum2d << '\n';

    cout << "since the difference as double is a much smaller value it is more accurate" << '\n';


    return 0;
}
