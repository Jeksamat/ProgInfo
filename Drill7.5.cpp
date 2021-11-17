//does not work w/ leap years
//can add year of days, monts or years
//Upgradeable
#include "../std_lib_facilities.h"
vector<string> months = { "Jan","Feb", "Marc", "Apr",	"Maj", "Jun", 
	"Jul", "Aug", "Sep", "Okt", "Nov", "Dec" };
enum class Month {
	jan=1, feb, mar, apr, may, jun, jul, aug, szep,	oct, nov, dec
};
Month operator++(Month& m) {
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}
ostream& operator<<(ostream& os, Month m) {
	return os << months[int(m)];
}

class Date {
public:
	class Invalid {};
	Date(int year, Month month, int day) : y(year), m(month), d(day) { 
		if(!is_valid())
			throw Invalid{}; 
	}
	bool is_valid();

	int get_day() { return d; };
	Month get_month() { return m; };
	int get_year() { return y; };

	void add_day(int n);
	void add_month(int n) {
		int i = 0;
		while (i < n) {
			++m;
			i++;
		}
		if (n > 12) 
			y += n / 12;
	}
	void add_year(int n) {
		y += n;
	}
	void out() {
		cout << get_year() << '-' << get_month() << '-' << get_day();
	}

private:
	int y;
	Month m;
	int d;
};

bool Date::is_valid() {
	if (y < 1800 || y > 2200 || d < 1 || d > 31)
		return false;
	return true;
}

void Date::add_day(int x){
		d += x;
		if (d > 31) {
			d -= 31;
			int i = 0;
			while (i < d/31) {
				++m;
				i++;
			}
			if (d/31 > 12)
				y += d/31 / 12;
			d %= 31;
		}
}

int main() {
	Date day1(2000, Month::jan, 20);
	day1.out();
	cout << " -- ";

	Date day2 = day1;
	day2.add_day(1000);
	day2.out();
	cout << " -- ";

	Date day3 = day1;
	day3.add_month(3);
	day3.out();
	cout << " -- ";

	Date day4 = day1;
	day4.add_year(5);
	day4.out();
	cout << endl;

	return 0;
}