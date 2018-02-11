/*

 HW2e - functions

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.

 */

#include <iostream>
#include <iomanip>


using namespace std;

double fact(int n){
    double ans = 1;
    for (int i = 1; i <=n; i ++){
        ans *= i;
    }
    return ans;
}

double fact2(int n){
    if(n<=0)
        return 1;
    return n * fact2(n-1);
}

double fibo(int n){
   double a = 1;
   double b = 1;
   double ans = 1;
    if (n > 2 ){
         for (int i = 2; i < n; i++){
             ans = a + b;
             a = ans - a;
             b = ans;
       }
   }
    else
        ans = 1;

    return ans;
}

double fibo2(int n){
    if (n <= 2)
        return 1;
    return fibo2(n-1) + fibo2(n-2);

}

double choose (int n, int r){
    double ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}

int main(){
    cout << setprecision(15);
    cout << fact(5) << ' ' << fact2(5) << '\n';
    cout << fact(15) << ' ' << fact2(15) << '\n';
    cout << fibo(5) << ' ' << fibo2(5) << '\n';
    cout << fibo(13) << ' ' << fibo2(13) << '\n';
    cout << choose(52,6) << '\n';
}