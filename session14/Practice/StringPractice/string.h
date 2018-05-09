//
// Created by Connor DePalma on 5/7/18.
//

#pragma once

#include <iostream>
class String {
private:
    int size;
    char* s;
    static int count;
public:

    String(const char* str) : size(strlen(str)), s(new char(size)) {
        for (int i = 0; i < size; i++)
            s[i] = str[i];

        count++;

    }

    String() : size(0), s(nullptr) {

    }

    ~String() {
        delete s;
    }

    String (const String& orig) : size(orig.size), s(new char(size)){
        for (int i = 0; i < size; i++)
            s[i] = orig.s[i];
    }

    String& operator=(const String& orig) {
        String Temp(orig);
        size = Temp.size;
        std::swap(s,Temp.s);
        return *this;
    }

    String(String&& orig) : size(orig.size), s(orig.s){
        orig.s = nullptr;
    }

    String operator+(const String& a) {
        String ans;
        ans.size = size + a.size;
        ans.s = new char(ans.size);
        for (int i = 0; i < size; i++)
            ans.s[i] = s[i];
        for(int i = 0; i < a.size; i++)
            ans.s[i + size] = a.s[i];
        return ans;


    }

    friend std::ostream&operator << (std::ostream& s, const String& a){
        for (int i = 0; i < a.size; i ++)
            s<< a.s[i] << ' ';
        return s;
    }

    static int getCount() {return count;}
};



