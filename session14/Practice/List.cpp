//
// Created by Connor DePalma on 5/6/18.
//

#include "List.h"
#include <iostream>


List::List(int size) : capacity(size), used(0), data(new int[capacity]){}



List::~List(){
    delete[] data;
}


List::List(const List& a) : used(a.used), capacity(a.capacity), data(new int[capacity]) {
    for(int i = 0; i < used; i++)
        data[i] = a.data[i];
}

List& List::operator =(const List& a){
    List temp(a);
    used = temp.used;
    capacity = temp.capacity;
    std::swap(data,temp.data);

    return *this;


}

List::List(List&& a) : used(a.used), capacity(a.capacity), data(a.data) {
    a.data = nullptr;
}


void List::add(int a){
    Grow();
    data[used++] = a;
}

void List::rem(){
    used--;
}

void List::remF(){
    for(int i = 0; i <used-1; i++)
        data[i] = data[i+1];
    used--;
}


void List::addF(int a){
    Grow();
    for(int i = used; i > 0; i--)
        data[i] = data[i-1];
    data[0] = a;
    used++;
}

std::ostream& operator <<(std::ostream& s, const List& a){
    for(int i = 0; i < a.used; i++)
        s<< a.data[i] << ' ';
    return s;
}
