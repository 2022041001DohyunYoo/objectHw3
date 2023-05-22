#ifndef Seat_H
#define Seat_H

#include <iostream>
#include <string>
using namespace std;

class Seat{
private:
    string Name = "-----";
    bool Booked = false;

public:

string getName(){return Name;}
void setName(string name){this->Name = name;}
bool isBooked(){return isBooked;}
void Book(string name);
void Cancel();
void show();


};
// 헤더 가드의 끝
#endif