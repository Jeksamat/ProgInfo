//Does work w/ leap years
//Max 1 month exta /step
//Checks 30 and 31 day months
//inefficient to upgade
#include "../std_lib_facilities.h"
struct Date {
    int y, m, d;
};

void init_day(Date& dd, int y, int m, int d) {
    if (y % 4 == 0 && m == 2 && d > 29) {
        error("No such day of year");
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
    dd.y = y;
    dd.m = m;
    dd.d = d;
}

void add_day(Date& dd, int n) {
    dd.d+=n;
    if (dd.y % 4 == 0) {
        if (dd.m == 2) {
            if (dd.d > 29) {
                dd.d -= 29;
                dd.m++;
            }
        }
    }
    else if (dd.m == 2) {
        if (dd.d > 28) {
            dd.d -= 28;
            dd.m++;
        }
    }
    else if (dd.m == 1 || dd.m == 3 || dd.m == 5 || dd.m == 7 || dd.m == 8 || dd.m == 10 || dd.m == 12) {
        if (dd.d > 31) {
            dd.d -= 31;
            dd.m++;
        }
    }
    else if (dd.d > 30) {
        dd.d -= 30;
        dd.m++;
    }

    if (dd.m > 12) {
        dd.m -= 12;
        dd.y++;
    }
}

int main() {
    Date today;
    cout << "today: ";
    init_day(today, 1978, 06, 25);
    cout << today.y << "-" << today.m << "-" << today.d << endl;
    cout << "Tomorrow: ";
    add_day(today, 1);
    cout << today.y << "-" << today.m << "-" << today.d << endl;

    return 0;
}

