#include <iostream>
#include <sstream> // string stream, attach stream to string to separate lines
#include <fstream> //
using namespace std;



int main(){
    ifstream f("vec.txt");
    string lineBuf;
    while(!f.eof()){
        getline(f, lineBuf); // memory where storing line
        istringstream line(lineBuf);
        double x,y,z;
        line >> x >> y >> z;

        cout << x << ' ' << y << ' ' << z << '\n';

    }
}