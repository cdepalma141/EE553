#include <iostream>
using namespace std;

int main() {
    for(int i = 100; i > 0; i /= 3 +1){
        cout << i;
    }
    cout << "\n\n";


    for(int i = 100; i > 1; i = i/3 +1){
        cout << i;
    }
    cout << "\n\n";
    for(int i = 23; i > 2; i = i/3 +1){
        cout << i+1;
    }

}
