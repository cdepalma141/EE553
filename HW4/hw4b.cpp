/*

 HW4b - JulianDate

 Connor DePalma.

 I pledge my honor that I have abided by the Stevens Honor System.


 There are three warnings at the beginning pertaining to the hour minute and section methods.  I was unable to figure out
 a way to rid of the warnings and not have an unwanted value outputted whenever the functions are called. However, the Class does
 work as expect in the trials that I did and with the values required for this hw assignment.

 */

#include <ctime>
#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;


class JulianDate {

private:

    static int EPOCH;
    int yr, day;
    double mon, hr, mn, sec;
    double jday; // number of days since epoch

public:

    JulianDate (double y, double m, int d, double hh = 0, double min = 0, double second = 0) : yr(y), mon(m), day (d),
    hr(hh), mn(min), sec(second) { //for input of specific Gregorian Date, can be used for full date and time or just date with default time of 00:00:00

        double UT = second/3600 + min/60 + hh;

        double julofEPOCH = 367*EPOCH - int(7.0*(EPOCH+int((1.0+9)/12))/4) + int((275*1.0)/9) + 1 + 1721013.5;

            jday = (367 * y - int(7 * (y + int((m + 9) / 12)) / 4) + int((275 * m) / 9) + d + 1721013.5 + UT / 24) -
                   julofEPOCH;

    }

    JulianDate (double juld = 0, int d = 0) : jday(juld), day(d) { //For today value

        if (juld == 0 || d != 0) {
            time_t seconds;
            seconds = time(nullptr);

            double days = (seconds / 86400.0);

            double jultoday =
                    days + (367 * 1970 - int(7.0 * (1970 + int((1.0 + 9) / 12)) / 4) + int((275 * 1.0) / 9) + 1 +
                            1721013.5);

            double julofEPOCH =
                    367 * EPOCH - int(7.0 * (EPOCH + int((1.0 + 9) / 12)) / 4) + int((275 * 1.0) / 9) + 1 + 1721013.5;

            jday = jultoday + d - julofEPOCH;
        }

        else {


        }


    }

    int leap(int year) const {

             //dont want to include decimal since that is only for time of day in UTC

            int leap = 0;

            if ((year) % 4 == 0 && (year) % 100 == 0 && (year) % 400 == 0){
                leap = 1;
            }
            else if((year) % 4 == 0 && (year) % 100 == 0 && (year) % 400 != 0){
                leap = 0;
            }
            else if((year) % 4 == 0 && (year) % 100 != 0 && (year) % 400 != 0){
                leap = 1;

            }
            else{
                leap = 0;
            }

            return leap;
    }

    int month(double a, int lp) const {

        int leap = lp;
        int count = 0;

        while(a > 0 && count <= 12){
            count++;
            if (count == 1 || count == 3 || count == 5 || count == 7 || count == 8|| count == 10 || count == 12){
                a -= 31;
            }
            else if (count == 4 || count == 6 || count == 9 || count == 11){

                a -= 30;

            }
            else if ( count == 2){
                if (leap == 1)
                    a -= 29;
                else
                    a -= 28;
            }
        }

        return count;

    }

    double d(double a, int lp) const {

        int leap = lp;
        int count = 0;

        while(a > 0 && count <= 12){
            count++;
            if (count == 1 || count == 3 || count == 5 || count == 7 || count == 8|| count == 10 || count == 12){
                a -= 31;
            }
            else if (count == 4 || count == 6 || count == 9 || count == 11){

                a -= 30;

            }
            else if ( count == 2){
                if (leap == 1)
                    a -= 29;
                else
                    a -= 28;
            }
        }

        if (count == 1 || count == 3 || count == 5 || count == 7 || count == 8|| count == 10 || count == 12){

            a += 31;
        }
        else if (count == 4 || count == 6 || count == 9 || count == 11){
            a +=30;
        }
        else if (count == 2){
            a += 28;
        }

        if (leap == 1){
            a += 1;
        }

        return a;

    }



    JulianDate getYear() const {

        double JD = int(jday); //dont want to include decimal since that is only for time of day in UTC

        return int((JD/365.2425) + EPOCH);


    }

    JulianDate getMonth() const {

        double JD = int(jday);

        double ydiff = (JD/365.2425);

        double num = 365*(ydiff - int(ydiff));

        int lp = int(JD/365.2425) + EPOCH;

        int lpyr = leap(lp);

        return month(num,lpyr);

    }

    JulianDate getDay() const {

        double JD = int(jday);

        double ydiff = (JD/365.2425);

        double num = 365*(ydiff - int(ydiff));

        int lp = int(JD/365.2425) + EPOCH;

        int lpyr = leap(lp);

        double day = d(num, lpyr);

        if (month(num,lpyr) == 2 && lpyr == 1)
            return round(day) + 1;

        else
            return round(day);

    }

    JulianDate getHour(){

        double hour = jday - int(jday);
        int h = hour*24;
        if (h < 0)
            cout << h << '\n';
        else if(h > 0)
            return h;


    }

    JulianDate getMin(){

        double hour = jday - int(jday);

        double min = (hour*24) - int(hour*24);

        int m = min *60;

        if (m < 0)
        cout << '0' << '\n';
        else if(m > 0)
        return m;


    }

    JulianDate getSec(){

        double hour = jday - int(jday);

        double min = (hour*24) - int(hour*24);

        double sec = (min*60) - int(min*60);

        int s = sec*60;

        if (s < 0)
            cout << s << '\n';
        else if(s > 0)
            return ceil(s);


    }



    double operator -(JulianDate a) const {

        return jday - a.jday;

    }


    JulianDate operator+(int b) {

        return JulianDate(jday, b);
    }

    friend ostream& operator <<(ostream& s, JulianDate a){

        return s << a.jday;

    }


};

int JulianDate::EPOCH = 2000; // Jan.1 2000, 00:00:00 = 0


int main() {

    cout << "\nValues are for EPOCH of Jan. 1 2000, 00:00:00" << '\n' << '\n';

    JulianDate newyear(2018, 1, 15, 0,0,0);
    JulianDate valentine(2018, 5, 11, 0,0,0);
    JulianDate today; // get it from the system time: time(nullptr)
    // localtime
    JulianDate a(2973); // can calculate date based off of Julian Date since Jan. 1 2000, 00:00:00

    double days = valentine - newyear;
    JulianDate due = today + 7;
    cout << setprecision(15) << today << '\n';
    cout << due << '\n';
    cout << days << '\n';
    cout << newyear << '\n';
    cout << valentine << '\n';
    cout << a << '\n' << '\n';

    cout << "Time is in UTC = EST + 5 (24 hour) as per Julian Date standard: " << '\n' << '\n';

    cout << "Right Now: \n"

         <<  "year: " << today.getYear()

         << "\nmonth: " << today.getMonth()

         << "\nday: " << today.getDay()

         << "\nhour: " << today.getHour()

         << "\nmin: " << today.getMin()

         << "\nsec: " << today.getSec() << '\n' << '\n';

    cout << "New Years: \n"

         <<  "year: " << newyear.getYear()

         << "\nmonth: " << newyear.getMonth()

         << "\nday: " << newyear.getDay()

         << "\nhour: " << newyear.getHour()

         << "\nmin: " << newyear.getMin()

         << "\nsec: " << newyear.getSec() << '\n' << '\n';


    cout << "Valentines: \n"

         <<  "year: " << valentine.getYear()

         << "\nmonth: " << valentine.getMonth()

         << "\nday: " << valentine.getDay()

         << "\nhour: " << valentine.getHour()

         << "\nmin: " << valentine.getMin()

         << "\nsec: " << valentine.getSec() << '\n' << '\n';



    cout << "2973 Julian Days since Jan 1 2000 00:00:00: \n"

         <<  "year: " << a.getYear()

         << "\nmonth: " << a.getMonth()

         << "\nday: " << a.getDay()

         << "\nhour: " << a.getHour()

         << "\nmin: " << a.getMin()

         << "\nsec: " << a.getSec() << '\n' << '\n';
}


