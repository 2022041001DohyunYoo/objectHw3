#include "Schedule.h"

void Schedule::Book(int num, string name){
    if(seatArr[num-1].isBooked() == false && num <= 8 && num > 0){
        seatArr[num-1].Book(name);
    }
    else if(seatArr[num-1].isBooked() == true && num <= 8 && num > 0){
        cout << "이미 예약된 좌석입니다."<< endl;
    }
}
void Schedule::Cancel(int num, string name){
    if(seatArr[num-1].isBooked() == false && num <= 8 && num > 0){
        cout<<"입력하신 예약은 존재하지 않습니다.";
    }

    else if(seatArr[num-1].isBooked() == true && num <= 8 && num > 0){
        if(name != seatArr[num-1].getName()) cout<<"입력하신 예약은 존재하지 않습니다.";

        else if(name == seatArr[num-1].getName()){
            seatArr[num-1].setName("-----");
            seatArr[num-1].Cancel();
        }
    }
}
void Schedule::Show(){
    for(int i = 0; i < 8; i++) cout<<seatArr[i].getName()<<" ";

    cout << endl;
}