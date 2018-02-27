//
// Created by Connor DePalma on 2/26/18.
//

#pragma once

#include "Vehicle.h"
#include <string>

class Car : public Vehicle {
private:
    std::string color; // do this so int headers so theres no clash with std and another type
public:
    Car(int speed, const std::string& color) : Vehicle(speed), color(color) { // do that with string so it doesnt copy twice

    }

    double payToll() const {

        return 15;
    }
};

