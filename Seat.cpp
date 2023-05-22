#include "Seat.h"

void Seat:: Book(string name){
    this->Name = name;
    Booked = true;
}
void Seat::Cancel(){
    this->Name = "-----";
    Booked = false;
}
void Seat::show(){
    cout << this->Name;
}