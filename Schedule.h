#ifndef Schedule_H
#define Schedule_H

#include "Seat.h"

using namespace std;


class Schedule{
private:
    Seat seatArr[8];

public:

    Schedule(){
        for(int i = 0; i < 8; i++) seatArr[i].setName("-----");}
    void Book(int num, const string &name);
    void Cancel(int num, const string &name);
    void Show();

};


#endif