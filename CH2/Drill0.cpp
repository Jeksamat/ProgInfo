/* no include
int main() {
cout << "Hello, World!\n";
return 0;
}
*/
/* misspelled include
#include "std_facilities.h"
int main() {
cout << "Hello, World!\n";
return 0;
}
*/
/* no ending "
#include "std_lib_facilities.h"
int main() {
cout << "Hello, World!\n;
return 0;
}
*/
/* integer instead of int
#include "std_lib_facilities.h"
integer main() {
cout << "Hello, World!\n";
return 0;
}
*/
/* < instead of <<
#include "std_lib_facilities.h"
int main() {
cout < "Hello, World!\n";
return 0;
}

/* '' instead of ""
#include "std_lib_facilities.h"
int main() {
cout << 'Hello, World!\n';
return 0;
}
*/
/* missing ;
#include "std_lib_facilities.h"
int main() {
cout << "Hello, World!\n"
return 0;
}
*/
#include "../std_lib_facilities.h"
int main() {
    cout << "Hello World!\n";
    keep_window_open();
    return 0;
}
/* 1 missing keep_window_open();
int main() {
    cout << "Hello World!\n";
    return 0;
}
*/
/* 2 COUT instead of cout
int main() {
    COUT << "Hello World!\n";
    keep_window_open();
    return 0;
}
*/
/* 3 , instead of ;
int main() {
    cout << "Hello World!\n",
    keep_window_open();
    return 0;
}
*/
/* 4 missing }
int main() {
    cout << "Hello World!\n";
    keep_window_open();
    return 0;
*/
/* 5 missing ()
int main {
    cout << "Hello World!\n";
    keep_window_open();
    return 0;
*/