#include "Seat.h"

void Seat:: Book(string name){
    this->Name = name;
    isBooked = true;
}
void Seat::Cancel(){
    this->Name = "-----";
    isBooked = false;
}
void Seat::show(){
    cout << this->Name;
}