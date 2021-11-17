
#include "../std_lib_facilities.h"

void swap_v(int a, int b) {
    int temp;
    temp = a, a = b;
    b = temp;
    cout << a << " " << b << endl;
}

void swap_r(int& a, int& b) {
    int temp;
    temp = a, a = b;
    b = temp;
    cout << a << " " << b << endl;
}

/*void swap_cr(const int& a, const int& b) {
    int temp;
    temp = a, a = b;
    b = temp;
    cout << a << " " << b << endl;
}*/ //constant means no swapping

int main() {
    int x = 7;
    int y = 9;
    swap_r(x, y);
    swap_v(7, 9);

    const int cx = 7;
    const int cy = 9;
    //swap_r(cx, cy); //cx, cy are constants so no swapping
    swap_v(7.7, 9.9);

    double dx = 7.7;
    double dy = 9.9;
    //swap_r(dx, dy); //not INT type variables. int& can't simplify double 
    swap_v(dx, dy);

    return 0;
}

