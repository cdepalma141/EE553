//
// Created by Connor DePalma on 2/26/18.
//

#include<iostream>

using namespace std;


class Postscript{

public:







};




int main() {
    Postscript p("test.ps");

    p.line(0,0,300,400); // 0 0 moveto 300 400 lineto stroke

    int r = 255, g =0, b = 0;

    p.setColor(int r, int g, int b);

    p.drawRect(x,y,w,h);

    p.fillRect(x,y,w,h);

    p.drawTriangle(x1,y1,x2,y2,x3,y3);

    p.fillTriangle(x1,y1,x2,y2,x3,y3);

    p.drawCircle(x,y,r);

    p.text(x,y, "testing testing 123");

    p.grid();





}