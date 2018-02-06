//
// Created by Connor DePalma on 2/5/18.
//

#include <iostream>
#include <fstream>


using namespace std;
double stats(double x[], int n);


int main(){

    ifstream f("grades.txt");
    double g;
    double array[256];

    while (!f.eof()){
        f >> g;
        cout << g << ' ';




    }
    cout << stats(array, 5);



}