#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
/*
 * For details of basic finance see: http://..... page ..
 *
 *
 *
 * @author: Connor DePalma
 */

/*
 * A security is a financial instrument, something that can be bought and sold on a market.
 *
 *
 * Every security must have a price and a yield. The yield may be zero.
 */
class Security {
private:
    static map<string, Security*> ticker;//Security:: ticker
    double price;
    string sym;
    static int count;

public:
    Security(double price, const string& sym) : price(price), sym(sym) {
        count++;
        ticker[sym] = this;
    }

    double getPrice() const { return price;}


    static Security* find(const string& sym)  {
        map<string, Security*>::iterator i = ticker.find(sym);
        if(i == ticker.end()) // not in map
            return nullptr;
        return i->second; // first is key second is value
    }
    virtual double yield() = 0;
};

class Stock : public Security {
private:
    double _dividend;
public:
    Stock(double price, const string& sym, double dividend) : Security(price, sym), _dividend(dividend) {}
    double dividend() { return _dividend;}
    double yield() { return dividend() / getPrice();}
};

class Bond {
public:
    double coupon() {}
    double couponPayment() {} //quarterly payments for annual percent
    yeild();

};

class Position {
    quantity, Security*

};

class BrokerageAccount {
private:
    vector<Position> portfolio;
    double balance;
public:
    BrokerageAccount(double money);

    void deposit(double amt);

    bool withdraw(double amt); // return false if doesnt work

    void buy(const string& sym, int qty);
    void sell(const string& sym, int qty); // cant sell what you don't own
};

int Security::count = 0;

map<string, Security*> Security::ticker;

int main() {
   new Security(175,"APPL");
   new Security(175,"BIDU");
   Security*s = Security::find("APPL");

}