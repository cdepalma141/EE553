//
// Created by Connor DePalma on 3/26/18.
//

#include <iostream>

using namespace std;

class String { // need constructor destructor and copy constructor and operator =
private:
    int len; // how much used
    char* s;
   // int capacity; // alloc

public:

    String() : len(0), s(nullptr) {
    }

    String(const char str[])  {
        len = strlen(str);

        s = new char[len];

        for(int i = 0; i < len; i++)
            s[i] = str[i];
    }

    ~String(){
        delete [] s; // already knows to do nothing if s is nothing (nullptr)
    }

    friend ostream& operator <<(ostream& s, const String& a){
        for (int i = 0; i <a.len; ++i)
            s<< a.s[i];
        return s;
    }

    String(const String& orig) : len(orig.len), s(new char[len]){
        for (int i = 0; i < len; i++)
            s[i] = orig.s[i];
    }

    String& operator =(const String & orig) { // returning reference of obj pointing to
        if(this != &orig) {
            delete[] s;
            len = orig.len;
            s = new char[len];
            for (int i = 0; i < len; i++)
                s[i] = orig.s[i];
        }
        return *this;//object pointing to


    }

    friend String operator +(const String& a, const String& b) {
        String ans;
        ans.len = a.len + b.len;
        ans.s = new char[ans.len];
        for (int i = 0; i < a.len; i++)
            ans.s[i] = a.s[i];
        int j = a.len;
        for ( int i = 0; i < b.len; i++)
            ans.s[j+i]= b.s[i];
        return ans;


    }



};


void f(String x){ // makes another copy
    cout << x << '\n';

}

int main(){

    String s = "abc";

    cout << s << '\n';
    String s2 = "def"; // = is not = it is initialization in this instance
    cout << s2 << '\n';

    String s3 = s + s2; // copy constructor, concatenates then copies into s3

    cout << s3 << '\n';

    s3 = s; // operator =

    f(s3);
#if 0
    String s4 = s3 * 20;

    cout << s3.substring(2, 4) << '\n';

#endif



}