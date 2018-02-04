#include <iostream>
using namespace std;


int main() {

    cout << sizeof(char) << '\n';
    cout << sizeof(short) << '\n';
    cout << sizeof(int) << '\n';
    cout << sizeof(long) << '\n';
    cout << sizeof(long long) << '\n';

    float e;
    double w;
    int g[ 10 ];
    double h[ 20 ];
    char i[ 80 ];
    double j[ 3 ][ 4 ];
    cout << sizeof(e) << '\n';
    cout << sizeof(w) << '\n';
    cout << sizeof(g) << '\n';
    cout << sizeof(h) << '\n';
    cout << sizeof(i) << '\n';
    cout << sizeof(j) << '\n';


    double f = (int)5.0 / 2.0;

    char c = 'A'+ 1;

    double q = int(5.0) / 2.0;

    cout << f << '\n';
    cout << c << '\n';
    cout << q << '\n';

}