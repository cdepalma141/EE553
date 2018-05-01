//
// Created by Connor DePalma on 4/30/18.
//


#include <thread>
#include <iostream>
#include <unistd.h>
#include<cmath>

using namespace std;

void countPrimes(uint64_t* count , uint64_t a , uint64_t b){
    uint64_t val = 0;

    for (uint64_t i = a; i <= b; i *=2)
        for(uint64_t j = 3; j <= sqrt(i); j*=2)
            val++;


    *count = val;
}

int main(){
    uint64_t count1, count2;
    thread t1(countPrimes, count1, 3, 5000000);
    thread t2(countPrimes, count2, 5000001, 10000000); // two cpus = still fast
    t1.join();//wait for thread to finish
    t2.join();
    cout<< count1 << ' ' << count2 << '\n';
}