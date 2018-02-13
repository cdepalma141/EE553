//
// Created by Connor DePalma on 2/12/18.
//
#include <iostream>

using namespace std;


class Wheel{
private:
    int pressure; //not const because pressure should change
    static int count; // doesnt affect bit size of wheel
 public:
    Wheel(int pressure) : pressure(pressure){}



};

//global definition of static variable
int Wheel::count = 0;



class Engine{
private:
    const int hp;

public:
    Engine (int hp) : hp(hp){ //initialize
        //this -> hp = hp; not good


    }


};


//car should have 4 wheels and an engine
class Car {
private:
    Engine e;
    Wheel w1, w2, w3, w4;

public:
    Car (int hp, int p) : e(hp), w1(p), w2(p), w3(p), w4(p) {


    }

};






int main(){


    cout << sizeof(Engine) << '\n';
    cout << sizeof(Wheel) << '\n';
    cout << sizeof(Car) << '\n';


}