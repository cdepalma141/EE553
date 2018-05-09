//
// Created by Connor DePalma on 5/8/18.
//

#include <iostream>
#include <list>
#include <vector>
#include <sstream>
using namespace std;

string solution(string& s, int K){

    list<char> mylist;
    list<char>::iterator pt;
    list<char>::reverse_iterator rpt;


    for(int i = 0; i < s.length(); i++)
        mylist.push_back(s[i]);



    for(pt = mylist.begin(); pt != mylist.end(); pt++) {
        if (islower(*pt))
            *pt = toupper(*pt);
    }




    for(int i = 0; i < mylist.size(); i++) {
        for (pt = mylist.begin(); pt != mylist.end(); pt++) {
            if (*pt == '-')
                pt = mylist.erase(pt);

        }
    }

    int N = mylist.size();

        uint16_t i = 0;

        for(rpt = mylist.rbegin(); rpt != mylist.rend(); rpt++) {
            i++;
            if (i % K == 0) {
                rpt++;
                mylist.insert(rpt.base(), '-');
            }

        }


        if(N%K == 0) {
            pt = mylist.begin();
            pt = mylist.erase(pt);

        }

    stringstream ss;

    for(pt = mylist.begin(); pt != mylist.end(); pt++)
            ss << *pt;

    string a = ss.str();

    return a;




}




int main(){


    string a = "l";

    cout << solution(a, 5) << '\n';



}