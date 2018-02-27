#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "truck.h"


using namespace std;


int main() {

    const Vehicle* list[10]; // if car is const vehicle should be const
    const Car c(55, "red");
    cout << c.payToll() << '\n';
    Truck t(90, 5, 1800);
    Bus b(45,13);

    list[0] = &c;
    list[1] = &t;
    list[2] = &b;


    for (int i = 0; i < 3; i++) {
        cout << (*list[i]).payToll() << '\n';
    }








}