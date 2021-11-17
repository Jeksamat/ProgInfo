//Does not work w/ leap years
//Max 1 month exta /step
//I'm just happy it works
#include "../std_lib_facilities.h"
class Year {
	static const int min = 1800;
	static const int max = 2200;
public:
	class Invalid {};
	Year(int x) : y(x) { 
		if (x < min || max < x)
			throw Invalid();
	}
	int year() {
		return y;
	}
private:
	int y;
};

ostream& operator<<(ostream& os, Year year) {
	return os << year.year();
}

class Date {
public:
	enum Month {
		jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
	};
	Date(Year year, Month month, int day);
	Year get_year() {
		return y;
	}

	Month get_month() {
		return m;
	}

	int get_day() {
		return d;
	}

	void out() {
		cout << get_year() << "-" << get_month() << "-" << get_day() << endl;
	}

private:
	Year y;
	Month m;
	int d;
};

Date::Date(Year year, Month month, int day) : y(year), m(month), d(day) {
	if (month == 2 && day > 28) {
		error("No such day of year");
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		if (day > 31)
			error("No such day of year");
	}
	else if (day > 30)
		error("No such day of year");

	if (day < 1)
		error("Non-positive day");
	if (month < 1 || m > 12)
		error("No such month of year");

	y = year;
	m = month;
	d = day;
}

int main() {
	Date dx3(Year(1978), Date::jun, 25);
	dx3.out();//numerical month output
	return 0;
}