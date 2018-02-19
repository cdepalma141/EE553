#include <iostream>
using namespace std;


int main() {
    double sum = 0;
    int n = 0;

    cin >> n;

    for (double i = 2; i <= n; i++ )
    {
        sum += 1/(4*i*i);


    }

    cout << sum;

    return 0;
}