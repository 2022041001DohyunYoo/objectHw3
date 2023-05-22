#ifndef ADD_H
#define ADD_H

#include <iostream>
#include <string>
using namespace std;

class Seat{
private:
    string Name = "-----";
    bool isBooked = false;

public:

void setName(string name){this->Name = name;}
void Book(string name);
void Cancel();
void show();


};
// 헤더 가드의 끝
#endif