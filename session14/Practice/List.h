//
// Created by Connor DePalma on 5/6/18.
//
#pragma once

#include <iostream>


class List {
private:

    int used;
    int capacity;
    int * data;

    void Grow(){
        if(used < capacity)
            return;
        int*old = data;
        data = new int[(capacity*2)+1];

        for(int i = 0; i < used; i++)
            data[i] = old[i];


        delete [] old;

    }

public:

    List(int);

    ~List();

    List(const List&);

    List& operator =(const List&);

    List(List&&);

    void add(int);

    void rem();

    void remF();

    void addF(int);

    friend std::ostream& operator <<(std::ostream&, const List&);


};