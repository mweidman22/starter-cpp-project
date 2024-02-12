#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
/*
int, char, float, bool, double, 

// for student
Wno,
name, 
major,
gpa,
dob,

*/
struct Date {
    int day, month, year;
};
struct student {
    string wno;
    string name;
    string major;
    double gpa;
    Date dob;
};
/*struct billamount{
    bill type;
    int number;
};*/
/*struct change{
    billamount tens;
    billamount fives;
    billamount ones;
};*/
enum class Bill {
    HUNDRED, TENWETY, TEN, FIVE, ONE
};
//change {{Bill::TEN, 2}, {BILL::FIVE,1}, {BILL::ONE,0}};
/*The C style*/
enum dayOfWeek{
    SUN, MON, TUE, WED, THU, FRI, SAT
};
enum workHolidays{
    SUN, MON
};
void print_student(student& s){
    cout << setw(10) << "WNO: " << setw(20) << s.wno<< endl
        << setw(10) << "Name: " << setw(20) << s.name << endl
        << setw(10) << "Major:" << setw(20) << s.major<< endl
        << setw(10) << "GPA:" << setw(20) << s.gpa << endl
        << setw(10) << "DOB:" << setw(20) << s.dob.month << "/" << s.dob.day << "/" << s.dob.year << endl;
}
void get_date(Date& d){
    char trash;
    cout << "Enter date (month/day/year): ";
    cin >> d.month >> trash >> d.day >> trash >> d.year;
};
string get_day_of_week(dayOfWeek day){
    // if (day == dayOfWeek::SUN){
    //     return "Sunday";
    // }else {
    //     return "some other day";
    // }
    switch(day){
        case dayOfWeek::SUN: return "Sunday";
        case dayOfWeek::MON: return "Monday";
        case dayOfWeek::TUE: return "Tuesday";
        case dayOfWeek::WED: return "Wednesday";
        case dayOfWeek::THU: return "Thursday";
        case dayOfWeek::FRI: return "Friday";
        case dayOfWeek::SAT: return "Saturday";
        default: return "Pick a day!";
    }
}
int main() {

    student stud;
    cout << "Enter W number: ";
    cin >> stud.wno;
    cout << "Enter a name: ";
    cin >> stud.name;
    cout << "Enter major: ";
    cin >> stud.major;
    cout << "Enter a gpa: ";
    cin >> stud.gpa;
    get_date(stud.dob);
    print_student(stud);
    /*cout << setw(10) << "WNO: " << setw(20) << std.wno<< endl
    << setw(10) << "Name: " << setw(20) << std.name << endl
    << setw(10) << "Major:" << setw(20) << std.major<< endl
    << setw(10) << "GPA:" << setw(20) << std.gpa << endl;*/
    dayOfWeek day = dayOfWeek::MON;
    //workHolidays day = workHolidays::SUN;
    cout << "Day of week" << get_day_of_week(day) << endl;
    //cout << "Day of week is: " << day << endl;
    //cout << "Holiday: " << day << endl;
    return 0;
}