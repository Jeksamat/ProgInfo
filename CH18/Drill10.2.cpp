
#include "../std_lib_facilities.h"

vector<int> gv;

void init_gv() {
	for (int i = 0; i < 10; i++) {
		gv.push_back(pow(2, i));
	}
}

void f(vector<int> vec) {
	vector<int> lv(vec.size());
	lv = gv;
	for (int i = 0; i < lv.size(); i++) {
		cout << lv[i] << " ";
	}
	cout << endl;
	vector<int> lv2 = vec;
	for (int i = 0; i < lv2.size(); i++) {
		cout << lv2[i] << " ";
	}
	cout << endl;
}

int main() {
	init_gv();

	f(gv);
	vector<int> vv;
	for (int i = 0; i < 10; i++) {
		if (i == 0) vv.push_back(1);
		else vv.push_back((i+1) * vv[i-1]);
	}
	f(vv);

	return 0;
}