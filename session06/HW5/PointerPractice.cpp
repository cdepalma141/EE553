//
// Created by Connor DePalma on 3/3/18.
//

#include <iostream>
#include <iomanip>

using namespace std;

class PointerPractice{

private:

    char a[40][50];

public:

    PointerPractice() {}


    PointerPractice fillWithZero()  {

        for (int i = 0; i < 40; i++)
            for (int j = 0; j < 50; j++)
                a[i][j] = '0';


    }

    PointerPractice fillWithZeroPoint()  {


        for (char (*p)[50] = a; p < a + 40; p++)
            for (int j = 0; j < 50; j++)
                (*p)[j] = '0';


    }


    PointerPractice setRow(int c, char b) {

        char (*p)[50] = a;

        for (int i = 0; i < 50; i++)
            p[c][i] = b;
    }

    PointerPractice setRowPoint(int c, char b) {

        for (int i = 0; i < 50; i++)
            a[c][i] = b;
    }

    PointerPractice printPoint() const {

        char b[40][50];

        for (int i = 0; i < 40; i++)
            for (int j = 0; j < 50; j++)
                b[i][j] = a[i][j];

        for (char (*p)[50] = b; p < b + 40; p++) {
            for (int j = 0; j < 50; j++) {
                cout << setw(3) << (*p)[j];
            }
            cout << '\n';
        }

        cout << "\n\n\n\n";
    }

    PointerPractice print() const {

        for (int i = 0; i < 40; i++) {
            for (int j = 0; j < 50; j++) {
                cout << setw(3) << a[i][j];
            }
            cout << '\n';
        }

        cout << "\n\n\n\n";
    }

};







int main() {
    PointerPractice p; // create the object containing the 2d array
    p.fillWithZeroPoint();
    p.printPoint();
    p.setRowPoint(4, '1'); // set every element in row 4 to the letter 1
    p.printPoint();
    p.fillWithZero();
    p.print();
    p.setRow(4, '1');
    p.print();
}