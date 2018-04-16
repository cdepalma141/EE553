// Example program
#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    int len;
    char* s;
public:
    String() : len(0), s(nullptr) {}
    
    String(const char* str) : len(strlen(str)), s(new char[len]) {
        for(int i = 0; i < len; i++) {
            s[i] = *str++;
        }
    }
    String(const String& a) : len(a.len), s(new char[len]){
        for(int i = 0; i < len; i++){
            s[i] = a.s[i];
        }
            
    }
    String (String&& a) : len(a.len), s(a.s) {
        a.len = 0;
        a.s = nullptr;
    }
    String& operator =(const String& a) {
        String temp(a);
        len = temp.len;
        s = new char[len];
        swap(s, temp.s);
        return *this;
    }
    
    ~String() {delete [] s;}
    
    String operator+(const String& a) {
        String ans;
        ans.len = a.len + len;
        ans.s = new char[ans.len];
        for(int i = 0; i < len; i++){
            ans.s[i] = s[i];
        }
        int j = len;
        for(int i = 0; i < a.len; i++){
            ans.s[j+i] = a.s[i];
        }
        return ans;
    }
    
    friend ostream& operator <<(ostream& s, const String& a) {
        for(int i = 0; i < a.len; i++){
            s << a.s[i] << ' ';
        }
        return s;
    }
            
};
int main()
{
  String a("abc");
  cout << a << '\n';
  String b = "def";
  cout << b << '\n';
  String c = a+b;
  cout << c << '\n';
  a = a;
  a = b;
  cout << a << '\n';
  
}
