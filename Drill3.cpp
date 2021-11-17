
#include "../std_lib_facilities.h"

int main(){
	try {
	
		cout << " Success!\n";
	
		cout << " Success !\n ";
	
		cout << " Success" << "!\n";
	
		cout << "success" << endl;
	
		//int res = 7;vector<int> v(10);v[5] = res; cout << "Success!\n ";
		
		//vector<int> v(10);v[5] = 7;if (v[5] == 7) cout << " Success!\n";
	
		//bool cond = true;if(cond) cout << "Success!\n ";else cout << "Fail!\n";
	
		//bool c = false;if (!c) cout << "Success !\n";else cout << "Fail!\n ";
	
		//string s = "ape";bool c = "fool" < s;if(!c)	cout << "Success!\n ";
	
		//string s = "ape ";if (s != "fool") cout << "Success !\n ";
	
		//string s = "ape";if(s != "fool") cout << "Success!\n";
	
		//string s = "ape";if (s + "fool " == "apefool ") cout << " Success!\n ";
	
		//vector<char> v(5);for (int i = 0; i < v.size(); ++i) cout << " Success !\n ";

		//vector<char> v(5);for (int i = 0; i <= v.size(); ++i) cout << "Success !\n ";

		//string s = "Success!\n ";for (int i = 0; i < 10; ++i) cout << s[i];

		//if (true) cout << "Success!\n ";else cout << "Fail!\n ";

		//int x = 2000;int c = x;if(c == 2000) cout << " Success!\n ";
	
		//string s = "Success !\n ";for (int i = 0; i < 10; ++i) cout << s[i];

		//vector<int> v(5);for (int i = 0; i <= v.size(); ++i)	cout << "Success !\n ";

		//int i = 0;int j = 9;while (i < 10) {++i;if (j < i) cout << "Success !\n";}

		//int x = 2;double d = 5 / (x / 2);if (d == 2 * (x + 0.5)) cout << "Success!\n";

		//string s = " Success !\n";for (int i = 0; i <= 10; ++i)	cout << s[i];

		//int i = 0;int j = 9;while (i < 10) {++i;if(j < i) cout << " Success !\n ";}

		//int x = 4;double d = 5 / (x - 2);if (d <= 2 * x + 0.5) cout << " Success!\n ";

		//cout << "Success!\n ";



		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops : unknown exception !\n";
		keep_window_open();
		return 2;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
