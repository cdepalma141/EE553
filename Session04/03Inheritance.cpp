//
// Created by Connor DePalma on 2/12/18.
//

#include <iostream>

using namespace std;

class Vehicle { // class becomes abstract with pure virtual function
private:
    double speed;
public:
    Vehicle (double speed) : speed(speed) {}
    friend ostream& operator <<(ostream& s, const Vehicle& v) {
        return s << v.speed;
    }

    virtual void payToll() const = 0; //all children MUST write method, i do not have to
    // a class that contains one or more virutal functions is abstract

};



//has speed and number of passengers
class Bus : public Vehicle { // a bus is a vehicle or is a kind of vehicle
private:
    int numPassengers;
public:
    Bus(double speed, int numPassengers) : Vehicle(speed), numPassengers(numPassengers){ //write in order of memory (parent first), will ignore order you put it in


    }
    void payToll() const {
        cout << "$4" << '\n';
    }

};

//speed and weight and number of axles
class Truck : public Vehicle{
private:
    double weight;
    int numAxles;
public:
    Truck(double speed, double weight, int numAxles) : Vehicle(speed), weight(weight), numAxles(numAxles){

    }

    void payToll() const{

        cout << "$" << 4*numAxles << '\n';
    }

};

//color and speed
class Car : public Vehicle {
private:
    string color;
public:
    Car(double speed, const string& color) : Vehicle(speed), color(color){}


    void payToll() const{

        cout << "$15" << '\n';

    }



};

int main(){ //vehicle is abstract, cannot make one instantiate
    const Bus b(55.5, 13); //making const to check methods
    const Truck t(90.5, 12000, 6);
    const Car c(55.5, "red");
    //t.print();
   // b.print();
   // c.print();
    t.payToll();
    b.payToll();
    c.payToll();
}