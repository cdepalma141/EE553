//
// Created by Connor DePalma on 3/5/18.
//

#pragma once

#include <string>
#include <vector>
#include "Body.h"

class GravSim {

private:
    std::vector<Body> bodies;
    double dt;
public:
    GravSim(const std::string& filename, double dt); // this is just how to call use .cpp for what it does

    void simulate(double time, double printPeriod);







};