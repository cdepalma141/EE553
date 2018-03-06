//
// Created by Connor DePalma on 3/5/18.
//

#include <iostream>


using namespace std;


class Engine {

private:

    int hp;

public:

    Engine (int hp = 0) : hp(hp) {}


};


class Wheel {

private:

    int pressure;

public:


};

class Vehicle {

private:

    int speed;
public:
    Vehicle(int speed) : speed(speed) {}


};



// inheritance
//1. car is a vehicle
//2. car is exactly one vehicle 1:1
//3. a car will always be a vehicle

class Car : public Vehicle {

private:
    Engine e;
    Wheel w1,w2,w3,w4;
    int speed;
public:
    Car(int speed, Engine e, int press) : Vehicle(speed), e(e), w1(press), w2(press), w3(press), w4(press) {}


};


int main(){

    Engine e(480);
    //create a car with speed = 55 an engine 4 wheels each with 30 psi
    Car c(55, e, 30 );

}