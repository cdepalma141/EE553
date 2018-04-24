//
// Created by Connor DePalma on 4/23/18.
//


class LinkedList{
private:

public:

};


class Elephant {
private:
    string name;
    int age;
public:
    Elephant(const string& name, int age) {}
};

int main() {

    LinkedList<int> a ;
    a.addEnd(3);
    a.addEnd(1);
    a.addEnd(4);
    a.addEnd(1);
    a.addEnd(5);
    cout << a; // 3 1 4 1 5

    LinkedList<Elephant> b;


}