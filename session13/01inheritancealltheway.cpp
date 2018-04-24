//
// Created by Connor DePalma on 4/23/18.
//
class Heart{
private: // default is privat. all data should be private unless there is good reason
    int bpm, systolic, diastolic;
protected: // children can get it

public:
    Heart() {}
    Heart(int bpm, int systolic, int diastolic){}
    int getBeats() const {return bpm;}

};

class Kidney {
private:
    int health;
public:
    int getHealth() {}

};


class Person : public Heart {// Kidney { //this is okay...2 kidneys cause a problem
private:
    Kidney k1, k2;

public:
    int getHealth() {}
};


class Pilot : public Airplane { // this doesn't really make sense

};