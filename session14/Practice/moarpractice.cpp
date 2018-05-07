//
// Created by Connor DePalma on 5/6/18.
//

#include <iostream>

using namespace std;

template<typename T, typename Key>
void sort(T a[], int n, Key T::*key){

    for (int j = 0; j< n-1; j++)
    for(int i = 0; i < n-1; i++)
        if(a[i].*key >a [i+1].*key){
            T Temp = a[i];
            a[i] = a[i+1];
            a[i+1] = Temp;

    }


}

template<typename T>
void sort(T a[], int n){

    for (int j = 0; j< n-1; j++)
        for(int i = 0; i < n-1; i++)
            if(a[i] >a [i+1]){
                T Temp = a[i];
                a[i] = a[i+1];
                a[i+1] = Temp;

            }


}

template<typename T>
void print(T a[], int n){
    for(int i = 0; i < n; i++)
        cout << a[i] <<' ';
    cout << '\n';
}

class Elephant {
public:
    int age;
    string name;
public:
    Elephant(const string& name, int age) : name(name), age(age) {}

    friend ostream& operator <<(ostream& s, const Elephant& e) {
        return s << "Elephant " << e.name << " " << e.age;
    }

    friend bool operator >(const Elephant& e1, const Elephant& e2) {
        return e1.name > e2.name;
    }
};



int main() {

    Elephant e2[] = { {"Fred", 3}, {"Jill", 19}, {"Alice", 23} };

    double e[] = {2.5, 3, 1};

    sort(e, 3);

    print(e,3);

    sort(e2, 3);

    print(e2,3);

    sort(e2, 3, &Elephant::name);

    print(e2, 3);

    sort(e2, 3, &Elephant::age);
    print(e2, 3);
}