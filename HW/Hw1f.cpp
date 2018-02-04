/*

 HW1f - Mystery Sum

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

/*
 In order to be able to see past 5 decimal places when using double I use setprecision() from the iomanip library.
 I found this on a cplusplus.com forum.

 the first part that is commented out is the test i use to determine how big i could make N while using float.  I was able to get N up to 4090
 before the number stopped changing. The value was 1.644725.

 */



#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

int main() {

    /*
    float N = 0;
    float sum = 0;
    cout << "Used this to test for how big 'N' can be ";
    cin >> N;

    for (float i = 1; i <= N; i ++){
        s1 += 1.0f/(i*i);
    }

    cout << "Sum: "  << setprecision(7) << sum <<'\n'; //4090 is best for N



    */

    float s1 = 0;

    for (float i = 1; i <= 4090; i ++){
        s1 += 1.0f/(i*i);
    }

    cout << "Sum S1: "  << setprecision(7) << s1 <<'\n';

    cout << "Square root of 6 times S1: " << sqrt(6 * s1) << '\n';

    float s2 = 0;

    for (float i = 4090; i >= 1; i--){

        s2 += 1.0f/(i*i);
    }

    cout << "Sum S2: "  << setprecision(7) << s2 <<'\n'; //4090 is best for N

    cout << "Square root of 6 times S2: " << sqrt(6 * s2) << '\n';

    cout << "the decreasing summation (S2) seems to be more accurate as it is closer to 3.14159...\n";


    return 0;
}