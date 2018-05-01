//
// Created by Connor DePalma on 4/30/18.
//

#include <iostream>
using namespace std;


int main(){
    uint64_t sum = 0;
    #pragma omp parallel for local(sum)

    for(int i = 0; i <= 1000000000; i++){
        sum += i;
    }
    cout << sum << '\n';
}