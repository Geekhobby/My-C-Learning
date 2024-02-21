#include <iostream>
using namespace std;

int main()
{
	cout << "HELLO THIS IS A CHECKER FOR YOUR IDENTITY" <<endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;


	string nationality;
	string lastName, firstName, middleInitial, fullName;
	string yourGender;
	int your_Age;

	cout << "ENTER YOUR LAST NAME: ";
	cin >> lastName;

	cout << "ENTER YOUR FIRST NAME: ";
	cin >> firstName;

	cout << "ENTER YOUR MIDDLE INITIALS: ";
	cin >> middleInitial;

	cout << "AGE: ";
	cin >> your_Age;

	cout << "";
	while (yourGender != "Male" && yourGender != "Female") {
		cout << "PLEASE ENTER YOUR GENDER: ";
		cin >> yourGender;
	}

	cout << "WHAT IS YOUR NATIONALITY: ";
	cin >> nationality;

	cout << "*****************************************************************************" << endl;

	fullName = lastName + " " + firstName+ " " + middleInitial;

	cout << fullName << endl << your_Age << endl << yourGender << endl << nationality << endl;

	cout << "**************************THANK YOU FOR YOUR SERVICE**************************";



	return 0;
}

