//Does work w/ leap years
//Max 1 month exta /step
//Checks 30 and 31 day months
//inefficient to upgade
#include "../std_lib_facilities.h"
struct Date {
    int year, month, day;

    Date(int y, int m, int d) {
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

        cout << "today: " << year << "-" << month << "-" << day << endl;
    }

    void add_day(int n) {
        day += n;
        if (year % 4 == 0) { //leap check
            if (month == 2) {
                if (day > 29) {
                    day -= 29;
                    month++;
                }
            }
        }
        else if (month == 2) { //feb check
            if (day > 28) {
                day-= 28;
                month++;
            }
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { //31 napos honapok
            if (day > 31) {
                day -= 31;
                month++;
            }
        }
        else if (day > 30) {
            day -= 30;
            month++;
        }

        if (month > 12) {
            month -= 12;
            year++;
        }

        cout << "today+ " << n << " day(s): " << year << "-" << month << "-" << day << endl;
    }
};

int main() {
    Date today(1978, 06, 25);
    today.add_day(60);

    return 0;
}

