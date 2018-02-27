//
// Created by Connor DePalma on 2/26/18.
//

#pragma once

#include <vector>
#include <random>
#include <string>
#include "Vehicle.h"

class TrafficSim {
private:
    std::vector<Vehicle*> vehicles;

public:

    TrafficSim(int numVehicle) {
        std::string colors[] = {"red", "blue", "yellow", "black"};


        std::default_random_engine gen(0);
        std::uniform_int_distribution<int> distribution(0, 2);
        std::uniform_int_distribution<int> speedDist(0, 55);
        std::uniform_int_distribution<int> pickColor(0, sizeof(colors) / sizeof(std::string));
        std::uniform_int_distribution<int> passDist(0, 30);
        std::uniform_int_distribution<int> axleDist(2, 6);
        for (int i = 0; i < numVehicle; i++) {
            int speed = speedDist(gen);

            switch (distribution(gen)) {
                case 0:
                    vehicles.push_back(new Car(speed, colors[pickColor(gen)]));
                    break;
                case 1:
                    vehicles.push_back(new Bus(speed, passDist(gen)));
                    break;
                case 2:
                    vehicles.push_back(new Truck(speed, axleDist(gen), 18000));
                    break;
            }

        }
    }

        void payToll(){

            for (int i = 0; i < vehicles.size(); ++i){
                std::cout << vehicles[i]->payToll() << '\n';

            }

    }
};