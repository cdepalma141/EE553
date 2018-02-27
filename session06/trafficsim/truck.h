//
// Created by Connor DePalma on 2/26/18.
//

#pragma once

#include "truck.h"
class Truck : public Vehicle{

private:
    int numAxles;
    double weight;
public:

    Truck(int speed, int axles, double weight) : Vehicle(speed), numAxles(axles), weight(weight) { // do that with string so it doesnt copy twice



    }

    double payToll() const {
    return 15*numAxles;

    }

};



