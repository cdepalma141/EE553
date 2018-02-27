//
// Created by Connor DePalma on 2/26/18.
//

#pragma once

#include "Vehicle.h"

class Bus : public Vehicle {
private:
    int numpassenger;
public:
    Bus(int speed, int np) : Vehicle(speed), numpassenger(np) { // do that with string so it doesnt copy twice

    }

    double payToll() const {

        return 4;
    }
};




