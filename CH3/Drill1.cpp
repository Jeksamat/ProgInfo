// Drill1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../std_lib_facilities.h"

int main()
{
	cout << "Enter the first-name of the person you want to write to" << endl;
	string name;
	cin >> name;
	cout << "Enter the age of the person you want to write to" << endl;
	int age;
	cin >> age;
	cout << "Enter the first-name of a friend" << endl;
	string friend_name;
	cin >> friend_name;
	cout << "Enter an m if the friend is male and an f if the friend is female" << endl;
	char friend_gender;
	cin >> friend_gender;
	cout << "Hello, " << name << "," << endl
		<< endl
		<< "	I hope I find you well. We are getting better here." << endl
		<< "Sometime in the near future I will have a hard time thanks to work and uni." << endl
		<< "Probably I shouldn't complain tho." << endl
		<< "In the end it was me who didn't do anything in time about it." << endl;
	cout << "Have you seen " << friend_name << " lately? " << endl;

	if (friend_gender == 'm')
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	else
		cout << "If you see " << friend_name << " please ask her to call me." << endl;

	if (age < 1 || age > 110)
		simple_error("You 're kidding!\n");
	else {
		cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
	}
	if (age < 12)
		cout << "Next year you will be " << age++ << endl;
	if (age == 17)
		cout << "Next year you will be able to vote." << endl;
	if (age > 70)
		cout << "I hope you are enjoying retirement." << endl;
	cout << endl
		<< "Yours sincerely," << endl
		<< "________ ______________" << endl
		<< "Mate Janoszky" << endl;

	return 0;
}

