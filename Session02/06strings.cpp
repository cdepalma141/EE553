#include <iostream>
#include <string>
using namespace std;



int main(){
    char s[] = "abcd"; // \0 (control^@) ASCII NUL

    string a = "abc";
    cout <<  a;

    a += a; // abcabc

    cout << a.size(); //hey a whats your size
    cout << a.substr(2, 2) << '\n';//ca
    cout << a.substr(2) << '\n'; // cabc
    cout << a.substr() << '\n'; // abcabc

    string b; // "this is a test"
    cin >> b; // only give "this"
    cout << "b=" << b << '\n';
    getline(cin, b); // read in everything until the new line after what is inputed
    cout << b << '\n';
}