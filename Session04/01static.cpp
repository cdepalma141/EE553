//
// Created by Connor DePalma on 2/12/18.
//
#include <iostream>
#include <string>

using namespace std;


class Zebra {
private:
    string name;
    static int count; //shared by the class, its not creating the count it is the declaration
public:
    Zebra(const string& s) : name(s) {
        count++;
        cout << " Hello my name is " << name << '\n';
    }
    ~Zebra() { //destructor uses ~, only used to undo things you do does not get rid of object just occurs when object dies
        count--;
    }
    static int getCount() { return count;} //static function to get static variable


};

int Zebra::count = 0; // this creates count


void f(){

    cout << Zebra::getCount() << '\n'; //static function -> static data
    Zebra a("Fred"); //now one zebra
    Zebra b("Alice"); // 2
    cout << Zebra::getCount() << '\n'; //static function -> static data

} // zebras die/destruct after function
int main(){
    f();
    f();


}