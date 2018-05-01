//
// Created by Connor DePalma on 4/30/18.
//


//OPENMP API



#include <thread>
#include <iostream>
#include <unistd.h>

using namespace std;

void f() {
    for(;;) {
        cout << "hello"<<flush;
        sleep(1);
    }
}
void g() {
    for(;;) {
        cout << "goodbye";
        sleep(2);
    }
}

int main(){
    thread t1(f);
    thread t2(g);
    t1.join();//wait for thread to finish
    t2.join();
}