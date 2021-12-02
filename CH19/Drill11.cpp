
#include "../std_lib_facilities.h"

unique_ptr<vector<int>> make_vec()
{
	unique_ptr<vector<int>> p{ new vector<int> };
	// ... fill the vector with data; this may throw an exception ...
	for (int i = 0; i < 10; i++) {
		p->push_back(pow(2, i));
		cout << (*p)[i] << " ";
	}
	cout << endl;
	return p;
}

int main() {
	make_vec();

	return 0;
}