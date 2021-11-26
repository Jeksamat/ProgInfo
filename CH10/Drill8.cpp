
#include "../std_lib_facilities.h"

struct Point {
	double X;
	double Y;
};
//1 2 13 4 5.1 6 7,8 (9 10) 1 1 2 2
int main() 
try {
//Original_points
	//containers
	vector<Point> original_points;
	vector<double> Xs;
	vector<double> Ys;
	//variables
	double n = 0;
	//promt
	cout << "Enter 7 (x,y) pairs:" << endl;
	//READ
	while (Ys.size() < 7) { //no escape
		cin >> n;
		if (cin) {
			//cout << n << ' ';//self check
			if (Xs.size() > Ys.size())
				Ys.push_back(n);
			else
				Xs.push_back(n);
		}
		else if (cin.fail()) {
			cin.clear();
			for (char ch; cin >> ch && !isdigit(ch);) {
				;
			}
			if (!cin)
				error("No input");
			cin.unget();
		}
		else {
			error("No input");
		}
	}
	for (int i = 0; i < Xs.size(); i++) {
		original_points.push_back(Point{ Xs[i],Ys[i] });
	}
	//WRITE
		//to console
	for (const auto& R : original_points) {
		cout << R.X << ' ' << R.Y << endl;
	}
		//to file
	ofstream ost{"mydata.txt"};
	if (!ost)
		error("Can't open mydata.txt");
	for (const auto& R : original_points) {
		ost << R.X << ' ' << R.Y << endl;
	}
//Processed_points
	//containers
	vector<Point> processed_points;
	ifstream ist{ "mydata.txt" };
	//variables
	double ix, iy;
	//READ
	while (ist >> ix >> iy) {
		processed_points.push_back(Point{ ix,iy });
	}
	//WRITE
	cout << endl;
	for (const auto& R : processed_points) {
		cout << R.X << ' ' << R.Y << endl;
	}
//COMPARE

	for (int i = 0; i < original_points.size(); i++) {
		if (original_points[i].X != processed_points[i].X)
			error("Something's wrong!");
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
