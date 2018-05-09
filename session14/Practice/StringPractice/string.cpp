//
// Created by Connor DePalma on 5/7/18.
//

#include <iostream>

using namespace std;

template<typename T, typename Key>
void sort(T a[], int n, Key T::*key){
    for(int j = 0; j<n-1; j++)
    for(int i = 0; i < n-1; i++){
        T t = a[i];
        if(a[i].*key>a[i+1].*key){
            a[i] = a[i+1];
            a[i+1] = t;
        }

    }
}

template<typename T>
void print(T a[], int n){
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
}

int main() {
    double e[] = {2, 1.5 ,5 ,4 ,3};

    sort(e, 5);

    print(e, 5);
}