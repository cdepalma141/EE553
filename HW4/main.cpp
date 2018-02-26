#include <iostream>
#include <cmath>
using namespace std;





int main(){

    double JD = 5964;

    double year = (JD/365.2425) + 2000;

    int leap = 0;

    if (int(year) % 4 == 0 && int(year) % 100 == 0 && int(year) % 400 == 0){
        leap = 1;
    }
    else if(int(year) % 4 == 0 && int(year) % 100 == 0 && int(year) % 400 != 0){
        leap = 0;
    }
    else if(int(year) % 4 == 0 && int(year) % 100 != 0 && int(year) % 400 != 0){
        leap = 1;

    }
    else{
        leap = 0;
    }

    double ydiff = year - 2000;

    double num2 = 365*(ydiff - int(ydiff));

    double month = round((JD/365.2425 - int(JD/365.2425))*12);

    int count = 0;

    while(num2 > 0 && count <= 12){
        count++;
        if (count == 1 || count == 3 || count == 5 || count == 7 || count == 8|| count == 10 || count == 12){

            num2 -= 31;


        }

        else if (count == 4 || count == 6 || count == 9 || count == 11){

            num2 -= 30;

        }
        else if ( count == 2){
            if (leap == 1)
                num2 -= 29;
            else
                num2 -= 28;
        }


    }


    if (count == 1 || count == 3 || count == 5 || count == 7 || count == 8|| count == 10 || count == 12){

        num2 += 31;


    }

    else if (count == 4 || count == 6 || count == 9 || count == 11){

        num2 +=30;

    }
    else if (count == 2){
            num2 += 28;
    }

    if (leap == 1){

        num2 += 1;
    }





    cout << int(year) << '\n';
    cout << leap << '\n';
    cout << month + 1 << '\n';
    cout << round(num2) << '\n';



    //double num = 365*ydiff + (ydiff/4) - (ydiff/100) + (ydiff/400);
    //cout << count << '\n';
    //cout << ydiff << '\n';
    //cout << num << '\n';
    //cout << num2b4 << '\n';
    //cout << day << '\n';
    // cout << num2 << '\n';
   // double num2b4 = num2;
   // double day = (((JD/365 - int(JD/365))*12) - int(((JD/365 - int(JD/365))*12)))*30;
}