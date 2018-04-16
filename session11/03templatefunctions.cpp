//
// Created by Connor DePalma on 4/15/18.
//
#include <iostream>

using namespace std;

template <typename T>
void sort(T x[], int n) {
    for(int j = 0; j< n-1; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (x[i] > x[i + 1]) {
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

class Elephant{
private:
    int age;
    string name;
public:
    Elephant(const string& name, int age) : name(name), age(age){}

    friend bool operator >(const Elephant& e1, const Elephant& e2) {
        return e1.name > e2.name;
    }

    friend ostream& operator << (ostream& s, const Elephant&  a){
        return s << "Elephant " << a.name << ", " << a.age;
    }


};

int main() {
    int a[] = {3 , 2, 1};
    sort(a, 3);

    print(a, 3);

    float b[] = {1.5 , 2.6, 1.2};
    sort(b, 3);

    print(b, 3);

    string d[] = {"hello", "rabbit", "abc", "What?"};
    sort(d, 4);

    print(d, 4);

    Elephant e[] = { Elephant("Fred", 3), Elephant("Jill", 19), Elephant("Alice", 23)};

    Elephant e2[] = { {"Fred", 3}, {"Jill", 19}, {"Alice", 23}};

    sort(e, 3);
    print(e,3);
}