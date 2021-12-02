
#include "../std_lib_facilities.h"

int main() {
//int
	int int1 = 7;
	int* p1 = &int1;
	cout << p1 << " value: " << int1 << endl;
	cout << endl;

//array1
	int* array1 = new int[7];
	for (int i = 0; i < 7; i++) {
		array1[i] = pow(2, i);
	}
	int* p2 = array1;
	cout << p2 << " values:" << endl;
	for (int i = 0; i < 7; i++) {
		cout << array1[i] << endl;
	}
	cout << endl;

//copy
	int* p3 = p2;
	p2 = p1;
	p2 = p3;
	cout << p1 << " value: " << *p1 << endl;
	cout << p2 << " value: " << *p2 << endl;

	delete[] p2;

//array copy
	int array2[10];
	for (int i = 0; i < 10; i++) {
		array2[i] = pow(2, i);
	}
	p1 = array2;

	int array3[10];
	p2 = array3;

	for (int i = 0;i < 10;i++) {
		array3[i] = array2[i];
	}

//vector copy
	vector<int> vec2;
	for (int i = 0; i < 10; i++) {
		vec2.push_back(pow(2, i));
	}
	vector<int> vec3;

	for (int i = 0; i < 10; i++) {
		vec3.push_back(vec2[i]);
	}

    //self check
		//	for (int i = 0; i < vec3->size(); i++) {
		//	cout << (*vec3)[i] << " ";
		//  }
		//  cout << endl;

	return 0;
}
