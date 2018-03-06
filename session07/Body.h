//
// Created by Connor DePalma on 3/5/18.
//

#pragma once

#include "Vec3d.h"

class Body {
private:

    constexpr static double G = 6.67408E-11;
    double mass;
    Vec3d pos;

public:
    //F = -G m1 m2 / (r12*r12)
    double force(const Body& b) const { //so you dont make an unnecessary copy, promise not to change it
        //r12 = dist(pos,b.pos)

    }



    double accel(const Body& b) const {
        return force() / mass;

    }

};