//
// Created by Connor DePalma on 4/23/18.
//
#include <iostream>

using namespace std;
#include <vector>;


class LinkedList {

private:
    struct Node { // LinkedList<>::Node, not actually inside LL, doesnt change size of LL, class that is all public is structure, class is s struct that is all default private

        int val;
        Node* next;
        Node(int val, Node*next) : val(val), next(next) {}

    };
    Node* head; //only thing in LL (size 8 bytes because it is a pointer
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node*q;
        for(Node*p = head; p!= nullptr;){
            q = p;
            p = p->next;
            delete q;
        }
    }

    LinkedList(const LinkedList& orig) = delete; // not allowed will cause error

    LinkedList& operator = (const LinkedList& orig) = delete;

    void addStart(int v) {
        head = new Node(v, head);
    }

    void addEnd(int v) {
        if (head == nullptr) {
            head = new Node(v, nullptr);
            return;
        }
        Node* p;
        for (p = head; p->next != nullptr; p = p->next){
            Node* temp = new Node(v , nullptr);
            p->next = temp;
        }

        //p is guaranteed to be pointing to last element
    }

    friend ostream&operator << (ostream& s, const LinkedList& list) {
        for(Node*p = list.head; p!= nullptr; p = p->next) {
            s << p->val << ' ';
        }
        return s;
    }
    class ConstIterator {
    private:
        Node* current;
    public:
        ConstIterator(const LinkedList& list) : current(list.head) { // without copy will crash because only lives for short time(kinda)
        }

        bool operator!() const  {
            return current != nullptr;
        }

        void operator ++(){
            current->next;
        }//operaort++(int something) postincrement

        int operator *() const{
            return current->val;
        }

    };

    class Iterator {
    private:
        Node* current;
    public:
        Iterator(const LinkedList& list) : current(list.head) { // without copy will crash because only lives for short time(kinda)
        }

        bool operator!() const  {
            return current != nullptr;
        }

        void operator ++(){
            current->next;
        }//operaort++(int something) postincrement

        int& operator *() const{
            return current->val;
        }

    };

};

int main() {
    LinkedList a;
    for(int i = 0; i<10;i++)
        a.addStart(i);
    for(int i = 0; i<10;i++)
        a.addEnd(i);
    cout << a << '\n';

    for (LinkedList::ConstIterator i = a; !i; ++i)
        cout << *i << ' ';
    cout << '\n';

    for (LinkedList::Iterator i = a; !i; ++i) {
        *i *= 2;
        cout << *i << ' ';
    }
    cout << '\n';
}
