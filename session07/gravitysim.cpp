//
// Created by Connor DePalma on 3/5/18.
//

#include "GravSim.h"

int main() {

    double dt = 3600;

    GravSim g("solarsystem.dat", dt);

    g.simulate(86400*365*100);

}
