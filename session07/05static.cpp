#include <iostream>
#include <string>

using namespace std;


class Trace {

private:
    static int times; // declaration (extern)
    const string& func;

public:

    Trace(const string& func) : func(func) {
        times++;
        cout << "Entering function " << func << '\n';
    }
    ~Trace() {
        cout << "Leaving function " << func << '\n';
    }

    static int count() { return times;} // can talk to class without needing an object

};

void g() {
    Trace t("g");
}

void f(){
    Trace t("f");
    g();
}

int Trace::times = 0; // defintion

int main(){
for(int i = 0; i < 10; i++)
    f();
    cout << Trace::count() << '\n'; // format for seeing static method (no need for object)

}