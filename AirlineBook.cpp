#include "AirlineBook.h"


int AirlineBook::start(){

    int n = 0;
    int index = 0;
    int seatNumber = 0;
    string name;
    string time[3] = {"07시 : ", "12시 : ", "17시 : "};

    cout << "*** 한성항공에 오신 것을 환영합니다. ***" << endl;

    while (n != 4){
        cout << "예약 1, 취소 2, 보기 3, 끝내기 4 >> ";
        cin >> n;

        switch (n){
            case 1 :
                cout<<"07시 1, 12시 2, 17시 3 >>";
                cin  >> index;

                cout<< time[index-1];
                ScheduleArray[index-1].Show();
                cout << "좌석번호 >> ";
                cin >> seatNumber;
                cout << "이름 >> ";
                cin >> name;

                if( seatNumber <= 8 && seatNumber >0) ScheduleArray[index-1].Book(seatNumber, name);
                else cout<<"좌석은 1~8 까지 입니다."<<endl;

                break;
            
            case 2 :
                cout<<"07시 1, 12시 2, 17시 3 >>";
                cin  >> index;
                cout<< time[index-1];
                ScheduleArray[index-1].Show();
                cout << "좌석번호 >> ";
                cin >> seatNumber;
                cout << "이름 >> ";
                cin >> name;
                if( seatNumber <= 8 && seatNumber >0) ScheduleArray[index-1].Cancel(seatNumber, name);
                else cout<<"좌석은 1~8 까지 입니다."<<endl;
                
                break;

            case 3:
                for(int i = 0; i < 3; i++) ScheduleArray[i].Show();
                break;
            
            case 4:

                cout<<"예약 시스템을 종료합니다"<<endl;
                return 0;
        }
    }
    
    return 1;
}
