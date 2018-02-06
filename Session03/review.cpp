//
// Created by Connor DePalma on 2/5/18.
//

//recursion must have if statement

#include <iostream>

using namespace std;


double factorial(int n){
    if (n <= 0);
        return 1;
    return n * factorial(n-1);

}

// for hw use three variables
// 1, 1, 2, 3, 5, 8 .....

double fibo(int n){





}

// recursive version   complexity of (2^n)
double fibo2(int n){
    static int memo[200];
    if (n <=2)
        return 1;
    return fibo2(n-1) + fibo(n-2);
}

int main(){






}

//NEVER USE == for FLOATING POINT