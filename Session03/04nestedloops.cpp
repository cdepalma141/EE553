//
// Created by Connor DePalma on 2/5/18.
//

#include <iostream>
using namespace std;

int main() {
    const int n = 5; // cant change n

    /*
     *
     * 1 2 3 4 5
     * 2 4 6 8 10
     * 3 6 9 12 15
     * 4 8 12 16 20
     * 5 10 15 20 25
     */





    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= n; i++) {
            cout << i * j << '\t';


        }

        cout << '\n'; // faster than using endl cause it does it in blocks but could miss errors endl forces flushing

    }


}