//Does  work w/ leap years
//Max 1 month exta /step
//Checks 30 and 31 day months
//Upgradeable, but that changes Date::add_day() hence not upgraded
#include "../std_lib_facilities.h"
struct Date {
private:
    int year, month, day;

public:
    Date(int y, int m, int d);

    void add_day(int n);

    int get_year() {
        return year;
    }
    int get_month() {
        return month;
    }
    int get_day() {
        return day;
    }

    void out() {
        cout << get_year() << "-" << get_month() << "-" << get_day() << endl;
    }
};

Date::Date(int y, int m, int d) {
    if (y % 4 == 0 && m == 2 && d > 29) {
        error("No such dayear of year");
    }
    else if (m == 2 && d > 28) {
        error("No such day of year");
    }
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d > 31)
            error("No such day of year");
    }
    else if (d > 30)
        error("No such day of year");

    if (d < 1)
        error("Non-positive day");
    if (m < 1 || m > 12)
        error("No such month of year");
    if (y < 1800)
        error("suspicious year");

    year = y;
    month = m;
    day = d;
}

void Date::add_day(int n) {
    day += n;
    if (year % 4 == 0 && month == 2 && day > 29) { //szokoev check
        day -= 29;
        month++;
    }
    else if (month == 2 && day > 28) { //februar check
        day -= 28;
        month++;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { //31 napos honapok
        if (day > 31) {
            day -= 31;
            month++;
        }
    }
    else if (day > 30) { //30 napos honapok
        day -= 30;
        month++;
    }

    if (month > 12) { //van-e ev++
        month -= 12;
        year++;
    }

    cout << "today+ " << n << " day(s): " << year << "-" << month << "-" << day << endl;
}

int main() {
    Date today(1978, 06, 25);
    today.out();
    today.add_day(30);
    today.out();

    return 0;
}

