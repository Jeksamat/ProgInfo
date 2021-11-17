
#include "../std_lib_facilities.h"

struct Point {
	double X;
	double Y;
};
//1 2 3 4 5 6 7,8 (9 10) (11,12)
int main() 
try {
	//containers
	vector<Point> original_points;
	vector<double> Xs;
	vector<double> Ys;
	//variables
	double n;
	//promt
	cout << "Enter 7 (x,y) pairs:" << endl;
	//READ
	while (true) {
		cin >> n;
		if (cin) {
			if (Xs.size() > Ys.size())
				Ys.push_back(n);
			else
				Xs.push_back(n);
		}
		else if (cin.fail()) {
			cin.clear();
			for (char ch; cin >> ch && !isdigit(ch);)
				;
			if (!cin)
				error("No input");
			cin.unget();
		}
		else {
			error("No input");
		}
	}	
	//WRITE
	for (int i = 0; i < Xs.size(); i++) {
		original_points.push_back(Point{ Xs[i],Ys[i] });
	}
	for (const auto& R : original_points) {
		cout << '(' << R.X << ',' << R.Y << ')' << endl;
	}

	return 0;
}
catch (runtime_error& e) {
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Something went wrong :( \n";
	return 2;
}