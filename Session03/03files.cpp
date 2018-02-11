//
// Created by Connor DePalma on 2/5/18.
//

#include <iostream>
#include <fstream>


using namespace std;
//double stats(double x[], int n);


int main(){

    ifstream f("/Users/connordepalma/Documents/Git/EE553/Session03/grades.txt");
    double g;
    double array[256];

    while (!f.eof()){
        f >> g;
        cout << g << '\n';




    }
    //cout << stats(array, 5);



}