
#include "../std_lib_facilities.h"

int ga[10];

void init_ga() {
	for (int i = 0; i < 10; i++) {
		ga[i] = pow(2, i);
	}
}

void f(int arr[], int size) {
	int la[10];
	for (int i = 0; i < 10; i++) {
		la[i] = ga[i];
		cout << la[i] << " ";
	}
	cout << endl;
	int* p = new int[size];
	for (int i = 0; i < size; i++) {
		p[i] = arr[i];
		cout << p[i] << " ";
	}
	cout << endl;
	delete[] p;
}

int main() {
	init_ga();

	f(ga, 10);
	int aa[10];
	for (int i = 0; i < 10; i++) {
		if (i == 0) aa[i] = 1;
		else aa[i] = (i+1) * aa[i-1];
	}
	f(aa, 10);

	return 0;
}