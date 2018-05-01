//
// Created by Connor DePalma on 4/30/18.
//

#include<iostream>
#include <thread>
#include <mutex> //mutual exclusion obj (first to get hold of data gets it and the other has to wait)
using namespace std;


class Account {

private:
    double balance;
    mutex m;
public:
    Account() : balance(0) {}

    void deposit(double amt) {
        m.lock();
        balance += amt;
        m.unlock();

    }
    bool withdraw(double amt) {
        m.lock();
        if (balance < amt) {
            m.unlock();
            return false;
        }
        balance -= amt;
        m.unlock();
        return true;
    }

    double getBalance() const {
        return balance;
    }

};

Account a;
const int n = 1000000;
void Deposit() {
    for (int i = 0; i < n; i++)
        a.deposit(1);
    cout << a.getBalance() << '\n';
}

void Withdraw() {
    for (int i = 0; i < n; i++)
        a.withdraw(1);
    cout << a.getBalance() << '\n';
}

int main() {

    thread t1(Deposit);//DONT TO MULTITHREAD WHEN SHARING DATA
    thread t2(Withdraw);
    t1.join();
    t2.join();


    return 0;

}