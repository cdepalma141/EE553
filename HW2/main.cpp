
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("/Users/connordepalma/Documents/Git/EE553/Session02/vec.txt");
    string lineBuf;
    while (!f.eof()) {
        getline(f, lineBuf);
        istringstream line(lineBuf);
        double x,y,z;
        line >> x >> y >> z;
        cout << x << ',' << y << ',' << z << '\n';
    }
}