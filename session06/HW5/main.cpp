#include<iostream>
#include <cmath>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

#if 0
int main(){
    char a[40][50];


    for (char *b = a; b < a+40+50; b++) {
            *b = '0';
        }


    for (int i = 0; i <= 50; i++) {
        for (int j = 0; j <= 40; j++) {
            cout << setw(3) << a[i][j];
        }
        cout << '\n';
    }

}


int main (){
    char a[4][5] = {};

    for (char (*p)[5] = a; p < a + 4; p++)
        for (int j = 0; j < 5; j ++)
            (*p)[j] = '3';

    for(int j = 0; j < 4; j++) {
        for (int i = 0; i < 5; i++)
            cout << a[j][i] << ' ';
        cout << '\n';
    }
}

#endif


int x;
void f(int x) {
    static int y = 1;
    x++;
    cout << x << ::x << y++;
    ::x--;
}

int main() {
    int x = 2;
    f(x);
    cout << x;
    f(x);
}