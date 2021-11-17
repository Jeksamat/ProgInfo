
#include "../std_lib_facilities.h"

double unitmulty(string unit) {
    double mutiplyer;
    if (unit == "cm")
        return mutiplyer = 0.01;
    else if (unit == "in")
        return mutiplyer = 0.0254;
    else if (unit == "ft")
        return mutiplyer = 0.0254 * 12;
    else if (unit == "m")
        return mutiplyer = 1;
    else
        return 0;
}
double smaller(double smallest, double num) {
    if (num < smallest)
        smallest = num;
    return smallest;
}
double larger(double largest, double num) {
    if (num > largest)
        largest = num;
    return largest;
}
void out(vector<double> nums, double sum, int db, double smallest, double largest) {
    cout << endl;
    for (int i = 0; i < nums.size();i++) {
        cout << nums[i] << " ";
    }
    cout << endl << endl;
    cout << "The SUM is " << sum << "m" << endl;
    cout << "There are " << db << " numbers." << endl;
    cout << "The smallest is " << smallest << "m" << endl;
    cout << "The largest is " << largest << "m" << endl;
}

int main(){
    double num, refnum, smallest = 0, largest = 0, sum = 0;
    int db = 0;
    string unit;
    vector<double> nums;
    cout << "Enter a single value followed by a single unit. Repeat or type '|' to finish." << endl << endl;
    while(cin >> num >> unit){
        double multyplier = unitmulty(unit);
        if (multyplier == 0)
            continue;
        refnum = num * multyplier;

        db++;
        sum += refnum;

        if (smallest == 0 && largest == 0) {
            smallest = refnum;
            largest = refnum;
        }

        smallest = smaller(smallest, refnum);
        largest = larger(largest, refnum);

        nums.push_back(refnum);
    }
    sort(nums);

    out(nums, sum, db, smallest, largest);
    return 0;
}


