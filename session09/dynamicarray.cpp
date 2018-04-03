//
// Created by Connor DePalma on 3/26/18.
//
#include <iostream>

using namespace std;


int main() {
    const int n = 1000000000;
    bool*primes = new bool[n];
    primes[0] = primes[1] = false;
    for (uint64_t i = 2; i <n;++i){
        primes[i] = true;
    }

    for(uint64_t i = 2 * 2; i < n; i += 2)
        primes[i] = false;

    for (uint64_t i = 2; i < n; ++i)
        if (primes[i]){
            for (uint64_t j = i*i; j< n; j+= 2*i)
                primes[j] = false;
        }

    delete[] primes;

}
