//
// Created by Connor DePalma on 4/15/18.
//

#pragma once

#include <iostream>



template <typename T> // good for one declaration
class List {
private:
    int capacity;
    int used;
    T* data;
    void grow() {}
public:
    List(int initialSize) : capacity(initialSize), used(0), data(new T[capacity]){}
    ~List() {
        delete [] data;
    }

    List(const List& orig) : capacity(orig.capacity), used(orig.used), data(new T[capacity]){
        for(int i = 0; i < used; i++){
            data[i] = orig.data[i];
        }

    }

    friend std::ostream& operator << (std::ostream& s, const List& a) { //need the <T> pre-c++11 because a friend is not technically a part of class
        for (int i = 0; i < a.used; i ++)
            s << a.data[i] << ' ';
        return s;

    }
    List& operator =(const List& orig) {
        List temp(orig); // same as list temp = orig
        std::swap(data, temp.data);
        used = temp.used;
        capacity = temp.capacity;
        return *this;
    }

    void add(const T& val) {
        grow();
        data[used++] = val;

    }




};