//
// Created by Connor DePalma on 4/15/18.
//

//
// Created by Connor DePalma on 4/15/18.
//
#include <iostream>

using namespace std;

class Elephant{
public:
    int age;
    string name;
    Elephant(const string& name, int age) : name(name), age(age){}

    friend bool operator >(const Elephant& e1, const Elephant& e2) {
        return e1.name > e2.name;
    }

    friend ostream& operator << (ostream& s, const Elephant&  a){
        return s << "Elephant " << a.name << ", " << a.age;
    }



};

template <typename T, typename Key>
void sort(T x[], int n, Key T::*key) {
    for(int j = 0; j< n-1; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (x[i].*key > x[i + 1].*key) { // .* is relative pointer, offset to what piece of obj you want to look at
                T temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
        }
    }

}

template <typename T>
void print (T x[], int n) {
    for (int i = 0; i < n; i++)
        cout << x[i] << " \n";
}


int main() {


    Elephant e[] = { Elephant("Fred", 3), Elephant("Jill", 19), Elephant("Alice", 23)};

    Elephant e2[] = { {"Fred", 3}, {"Jill", 19}, {"Alice", 23}};

    sort(e, 3, &Elephant::name);
    print(e,3);

    sort(e, 3, &Elephant::age);
    print(e,3);
}