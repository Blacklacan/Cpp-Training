#include <iostream>

using namespace std;

void ShowWeekDayMenu() {
    cout << "****************************\n";
    cout << "         Week day        \n";
    cout << "****************************\n";
    cout << "Please Choose the day?\n";
    cout << "(1) Sun\n";
    cout << "(2) Mon\n";
    cout << "(3) Tues\n";
    cout << "(4) Wednes\n";
    cout << "(5) Thurs\n";
    cout << "(6) Fri\n";
    cout << "(7) Sutur\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";
}



enum WeekDay {
    Sun =1,
    Mon =2,
    Thurs =3,
    Wedness = 4,
    Teus =5,
    Fri = 6,
    Sutur = 7
};

WeekDay ReadWeekday() {
    int wd;
    cin >> wd;
    return (WeekDay)wd;
}

string PrintWeekDay(WeekDay day) {
    switch (day)
    {
    case Sun:
        return "Sunday";
        break;
    case Mon:
        return "Monday";
        break;
    case Thurs:
        return "Thursday";
        break;
    case Wedness:
        return "Wednesday";
        break;
    case Teus:
        return "Teusday";
        break;
    case Fri:
        return "Friday";
        break;
    case Sutur:
        return "Suturday";
        break;
    default:
        return "NOT A WEEK DAY";
        break;
    }
}


int main() {
    ShowWeekDayMenu();
    cout << "Today is: " << PrintWeekDay(ReadWeekday());

    return 0;
}