#include "../std_lib_facilities.h"

namespace X {
	int var;
	void print() {
		cout << var << endl;
	}
}
namespace Y {
	int var;
	void print() {
		cout << var << endl;
	}
}
namespace Z {
	int var;
	void print() {
		cout << var << endl;
	}
}

int main()
{
X::var = 7; 
X::print(); //prints 7
using namespace Y; 
var = 9;
print(); //prints 9
{
	using Z::var;
	using Z::print;
	var = 11;
	print(); //prints 11
}
print(); //prints 9 'cause Y
X::print(); //prints 7
}