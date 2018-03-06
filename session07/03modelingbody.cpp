//
// Created by Connor DePalma on 3/5/18.
//

#include <iostream>


using namespace std;

class Car; // need declaration of car to refer to it in Person


class Person {

private:
    vector<Car*> owned; // cant do it with car because dont know size but we know size of pointers to cars
public:
    Person(){}
    void buy(Car* c) { }

};


class Car {
private:
    vector<Person*> ownedby;

public:



};

int main(){

    Person p("Dov");
    Car c("red");
    Car c1("blue")
    p.buy(c);
    p.buy(c1);
    Person p2("Ellen");
    p2.buyCar(p);



}