//
// Created by Connor DePalma on 3/11/18.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Postscript {

private:
    string file;

    fstream stream;

    double r, g, b;

public:

    Postscript (string const & file) : file(file) {



        stream.open (file, ios::trunc | ios::out); //opens stream and allows for each new addition to be appended to the last



    }


    void line(double x, double y, double x1, double y1) {



        stream << x << " " << y << " moveto\n" << x1 << " " << y1 << " lineto\nstroke\n\n";

    }

    void setColor(double rd, double gn, double bl) {

        r = rd;
        g = gn;
        b = bl;

          stream << r << " " << g << " " << " " << b << " setrgbcolor\n\n";

    }

    void drawRect(double x, double y, double w, double h) {



        stream << x << " " << y << " moveto\n" << x+w << " " << y << " lineto\n"
               << x+w << " " << y+h << " lineto\n" << x << " " << y+h << " lineto\n"
               << "closepath\nstroke\n\n";

    }

    void fillRect(double x, double y, double w, double h) {



        stream << x << " " << y << " moveto\n" << x+w << " " << y << " lineto\n"
               << x+w << " " << y+h << " lineto\n" << x << " " << y+h << " lineto\n"
               << "closepath\nfill\n\n";

    }

    void drawTriangle(double x1, double y1, double x2, double y2, double x3, double y3) {

        stream << x1 << " " << y1 << " moveto\n"
        <<x2 << " " << y2 <<" lineto\n"
        <<x3 << " " << y3 <<" lineto\n"
        <<"closepath\n stroke\n\n";

}

void fillTriangle(double x1, double y1, double x2, double y2, double x3, double y3) {

    stream << x1 << " " << y1 << " moveto\n"
    <<x2 << " " << y2 <<" lineto\n"
    <<x3 << " " << y3 <<" lineto\n"
    <<"closepath\n fill\n\n";

}



#if 0
        if (x1 < x2) {
            stream << x1 + x2 << " " << y1 + y2 << " lineto\n";
        }
        if (x1 > x2 & y1 < y2) {
            stream << x1 - x2 << " " << y1 + y2 << " lineto\n";
        }
        if (x1 > x2 & y1 > y2) {
            stream << x1 - x2 << " " << y1 - y2 << " lineto\n";
        }
        if (x1 < x2 & y1 > y2) {
        stream << x1 + x2 << " " << y1 - y2 << " lineto\n";
        }

        if(x2 < x3 & y2 < y3)
            stream << x2+x3 << " " << y2+y3 << " lineto\n";

        if(x2 > x3 & y2 < y3)
            stream << x2-x3 << " " << y2+y3 << " lineto\n";

        if (x2 > x3 & y2 > y3)
            stream << x2-x3 << " " << y2-y3 << " lineto\n";

        if (x2 < x3 & y2 > y3)
            stream << x2+x3 << " " << y2-y3 << " lineto\n";

        stream << "closepath\nstroke\n\n";

    }
    #endif

};



int main() {
    Postscript p("text.ps");
    int r = 255, g = 0, b = 0;

    p.setColor(r, g, b);

    p.line(0,0, 400,400);  // 0 0 moveto 300 400 lineto stroke

    p.setColor(0, 255, 0);

    p.drawRect(0, 0, 100, 100);   // x y moveto x+w y lineto x+w y+h lineto ... closepath stroke

    p.setColor(0, 0, 255);

    p.fillRect(110, 0, 100, 100);   // x y moveto x+w y lineto x+w y+h lineto ... closepath fill

    p.setColor(0, 0, 255);

    p.drawTriangle(0, 150, 100, 150, 50, 225);

    p.setColor(0, 0, 255);

    p.fillTriangle(220, 0, 320, 0, 270, 75);
    /*
    p.drawCircle(x,y,r); // x y 0 360 r arc stroke
    p.text(x,y, "testing testing 123"); // look it up  setfont  (ABC) show

    p.grid(300, 50, 500, 400, 50, 700);

*/

}
