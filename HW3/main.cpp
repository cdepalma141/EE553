#include <iostream>
using namespace std;


int main() {

    int g[3] = {5 ,5 ,2};
    double mean;

    for (int i = 0; i < 3; i++ )
    {

        mean += g[i];
    }
cout << mean/3;

}