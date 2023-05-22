#ifndef Schedule_H
#define Schedule_H

#include "Seat.h"

using namespace std;


class Schedule{
private:
    Seat seatArr[8];

public:
    void Book(int num, string name);
    void Cancel(int num, string name);
    void Show();
};


#endif