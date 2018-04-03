//
// Created by Connor DePalma on 4/2/18.
//

#include <iostream>
using namespace std;

class GrowArray {
private:

    int used;
    uint32_t capacity;
    int* data;

    void grow() {
        int*old = data;

        data = new int[capacity =capacity*2+1];
        for (uint32_t i = 0; i < used; ++i)
            data[i] = old[i];
        delete [] old;

    }

public:
    GrowArray(uint32_t initialCapacity= 0) : used(0), capacity(initialCapacity), data(new int[capacity]) { //order in initializer list is determined by private order not how you type it here

    }

    ~GrowArray() {
        delete [] data;
    }

    GrowArray(const GrowArray& orig) : used(orig.used), capacity(orig.capacity), data(new int[capacity]){
        for (uint32_t i = 0; i < used; ++i)
            data[i] = orig.data[i];
    }

#if 0
    GrowArray& operator =(const GrowArray& orig){
        if(this != &orig) {
            delete[] data;

            used = orig.used;
            capacity = orig.capacity;
            data = new int[capacity];
            for (uint32_t i = 0; i < used; ++i)
                data[i] = orig.data[i];
        }
        return *this;

    }
#endif

    // newer copy/swap style operator =

    GrowArray& operator = (const GrowArray& orig){
        GrowArray copy(orig);//make copy
        swap(copy.data, data);
        return *this;

    }

    friend ostream&operator << (ostream& s, const GrowArray& g){
        for(int i = 0; i < g.used; i++)
            s << g.data[i]<< ' ';
        return s;
    }

    void addEnd(int v)
    {
        if(used >= capacity)
            grow();
        data[used++] = v;
    }

    void addStart(int v){
        if(used >= capacity)
            grow();

        for (uint32_t i = used; i > 0; --i)
            data[i] = data[i-1];
        used++;
        data[0] = v;

    }

    void removeEnd() {
        used--;
    }
    void removeStart() {
        for(uint32_t i = 0; i < used-1; ++i)
            data[i] = data[i+1];
        used--;



    }

};

void f(GrowArray g) { // makes a copy, calls cpy constructor


}

GrowArray g(){

    GrowArray a;
    a.addEnd(3);
    return a; //makes copy

}

int main(){
    //cases for copy constructor
    GrowArray c = b;
    GrowArray d(b);
    f(b);



}