//
// Created by Connor DePalma on 5/6/18.
//
#pragma once

#include <iostream>

template <typename T>
class List2 {

private:

    uint64_t used;
    uint64_t capacity;
    T * data;

    void Grow(){
        if(used < capacity)
            return;

        T*old = data;
        data = new T[(capacity*2)+1];

        for(uint64_t i = 0; i < used; i++)
            data[i] = old[i];


        delete [] old;



    }

   void Check(){
       if(used > 5.0)
           throw used;
   }


public:

    List2(uint64_t size) : capacity(size), used(0), data(new T[capacity]){

    }



    ~List2(){
        delete[] data;
    }


    List2(const List2& a) : used(a.used), capacity(a.capacity), data(new T[capacity]) {
        for(uint64_t i = 0; i < used; i++)
            data[i] = a.data[i];
    }

    List2& operator =(const List2& a){
        List2 temp(a);
        used = temp.used;
        capacity = temp.capacity;
        std::swap(data,temp.data);

        return *this;


    }

    List2(List2&& a) : used(a.used), capacity(a.capacity), data(a.data) {
        a.data = nullptr;
    }


    void add(T a){
        Grow();
        Check();
        data[used++] = a;
    }

    void rem(){
        used--;
    }

    void remF(){
        for(uint64_t i = 0; i <used-1; i++)
            data[i] = data[i+1];
        used--;
    }


    void addF(T a){
        Grow();
        Check();
        for(uint64_t i = used; i > 0; i--)
            data[i] = data[i-1];
        data[0] = a;
        used++;
    }

    friend std::ostream& operator <<(std::ostream& s, const List2& a){
        for(uint64_t i = 0; i < a.used; i++)
            s<< a.data[i] << ' ';
        return s;
    }

    uint64_t checkUsed() const {
        return used;
    }


};