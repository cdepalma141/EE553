//
// Created by Connor DePalma on 4/23/18.
//

#include <cstdint>

class Employee {
private:
    uint64_t ssn;
public:
    Employee(uint64_t ssn) : ssn(ssn) {}
};



class Secretary :public virtual Employee { //employee pointer
public:
    Secretary(uint64_t ssn) : Employee(ssn) {

    }

    void processRegistrations() {
    }

    void buyToys() {}

};

class Temp : public virtual Employee { //employee pointer (same as pointer in Secretary
private:
    Date end;
public:
    Temp(uint64_t ssn, Date end) : Employee(ssn), end(end) {}

};

//class TempSecretary : public Temp, public Secretary { //BAD which ssn do you use??
//};

class TempSecretary : public Temp, public Secretary {
};