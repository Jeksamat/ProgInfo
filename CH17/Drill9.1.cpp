
#include "../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a) {
    for (int i = 0; i < 10; i++) {
        os << a[i] << " ";
    }
    cout << endl;
    return os;
}

ostream& print_array(ostream& os, int* a, int n) {
    for (int i = 0; i < n; i++) {
        os << a[i] << " ";
    }
    cout << endl;
    return os;
}

ostream& print_vector(ostream& os, vector<int>* v) {
    for (int i = 0; i < v->size(); i++) {
        os << (*v)[i] << " ";
    }
    cout << endl;
    return os;
}

int main()
{
//my_arr1
    int* my_arr1 = new int[10];
    for (int i = 0; i < 10; i++) {
        cout << my_arr1[i] << " ";
    }
    cout << endl;
    print_array10(cout, my_arr1);
    delete[] my_arr1;

//my_arr2
    int* my_arr2 = new int[10];
    for (int i = 0; i < 10; i++) {
        my_arr2[i] = 100+i;
    }
    for (int i = 0; i < 10; i++) {
        cout << my_arr2[i] << " ";
    }
    cout << endl;
    delete[] my_arr2;

//my_arr3
    int* my_arr3 = new int[11];
    for (int i = 0; i < 11; i++) {
        my_arr3[i] = 100 + i;
    }
    for (int i = 0; i < 11; i++) {
        cout << my_arr3[i] << " ";
    }
    cout << endl;
    delete[] my_arr3;

//my_arr4
    int* my_arr4 = new int[20];
    for (int i = 0; i < 20; i++) {
        my_arr4[i] = 100 + i;
    }
    print_array(cout, my_arr4, 20);
    delete[] my_arr4;

//vectors
    vector<int>* vec1 = new vector<int>;
    for (int i = 0; i < 10; i++)
        vec1->push_back(i+100);
    print_vector(cout, vec1);
    delete vec1;

    vector<int>* vec2 = new vector<int>;
    for (int i = 0; i < 11; i++)
        vec2->push_back(i+100);
    print_vector(cout, vec2);
    delete vec2;

    vector<int>* vec3 = new vector<int>;
    for (int i = 0; i < 20; i++)
        vec3->push_back(i+100);
    print_vector(cout, vec3);
    delete vec3;

    return 0;
}


