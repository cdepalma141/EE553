//
// Created by Connor DePalma on 2/26/18.
//

#pragma once

class Vehicle {

private:
    int speed;

public:
    Vehicle(int s) :speed(s) {}

    virtual double payToll() const = 0; //abstract method, means vehicle is abs. abs class cannot make obj


};

