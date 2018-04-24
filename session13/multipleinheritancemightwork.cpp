//
// Created by Connor DePalma on 4/23/18.
//

class Mushu {
public:
    void f() {}
};
class Garlic {};

class Chicken {
public:
    void f() {} // not good idea ^^
};
class Beef {};

class MushuChicken : public Mushu, public Chicken {};