//
// Created by Connor DePalma on 2/5/18.
//

#include <iostream>
#include <string>

using namespace std;


int main(){
   char c = 'x'; // one byte (wchar_t is 4 bytes)

    char s[80] = "abc"; // a b c \0 NUL ^@ actually 4 bytes in this string


    string s3 = "abc"; // too big of string can go out of memory
    cout << s3;
    for (int i = 0; i < s3.length(); i++)
        cout << s3[i];






}