#ifndef ANIT_AIRCRAFT_BASE_MANAGER_H
#define ANIT_AIRCRAFT_BASE_MANAGER_H
#include "Gun.h"
#include <vector>
#include <iostream>

using namespace std;

//class responsible for holding all anti-aircraft guns
class Manager {
    vector<Gun*> guns;
public:
    Gun* getGun(int);
    int getSize();
    void loadGuns();
    void writeGuns();

    ~Manager();
};


#endif //ANIT_AIRCRAFT_BASE_MANAGER_H
