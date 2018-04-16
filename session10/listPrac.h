//
// Created by Connor DePalma on 4/15/18.
//

#pragma once

#include <iostream>
class List {
private:
    int used;
    int capacity;
    int* data;
    void grow(){
        if(used < capacity)
            return;
        int * old = data;
        if (capacity == 0)
            capacity = 1;
        data = new int[capacity *= 2];
        for (int i = 0; i < used; i ++)
            data[i] = old[i];

        delete [] old;


    }
public:
    List(int size) : capacity(size), used(0), data(new int[capacity]){}

    ~List(){ delete [] data;}

    List (const List& orig) : used(orig.used), capacity(orig.capacity), data(new int[capacity]) {
        for (int i = 0; i < used; i++)
            data[i] = orig.data[i];

    }

    List& operator =(const List& orig) {
        if(this != &orig){
            delete [] data;
            used = orig.used;
            capacity = orig.capacity;
            data = new int [capacity];

            for(int i = 0; i < used; i++)
                data[i] = orig.data[i];

        }
        return *this;
    }

//    List& operator = (const List& orig){
//       List temp(orig);
//       used = temp.used;
//       capacity = temp.capacity;
//       std::swap(data, temp.data);
//       return *this;
//    }

    friend std::ostream& operator <<(std::ostream& s, const List& a){
        for(int i = 0; i < a.used; i++)
            s << a.data[i] << ' ';
        return s;
    }

    void addFront(int a){
        if(used > capacity)
            grow();
        for(uint32_t i = used; i > 0; i--)
            data[i] = data[i-1];
        used++;
        data[0] = a;
    }
    void add(int a){
        if(used > capacity)
            grow();
        data[used++] = a;
    }

    void remove(){
        used--;
    }

    void removeFront(){
        for(uint8_t i = 0; i < used-1; i++)
            data[i] = data[i+1];
        used--;
    }

};
