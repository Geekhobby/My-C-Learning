#include <iostream>
using namespace std;

float addition(float a, float b)
{ 
	return a + b;
}
float subtraction(float a, float b) 
{
	return a - b;
}
float multiplication(float a, float b) 
{
	
	return = a * b;
	
}
float division(float a, float b) 
{
	return = a / b;
}




int main() 
{
	cout << " \t \t MINI CALCULATOR USING FUNCTIONS \t \t \n";

	char choose;
	float fNumber, lNumber;

	
	cout << "Please select you operation: ";
	cin >> choose;

	cout << "Enter your first number: ";
	cin >> fNumber;

	cout << "Enter your next number: ";
	cin >> lNumber;

	if (choose == '+')
	{
		cout << addition(fNumber, lNumber);
		cout << "\n";
		
	}

	else if (choose == '-') {
		cout <<  subtraction(fNumber, lNumber);
		cout << "\n";
	}

	else if (choose == '*') {
		cout <<  multiplication(fNumber, lNumber);
		cout << "\n";
	}

	else if (choose == '/') {
		cout << division(fNumber, lNumber);
		cout << "\n";
	}

	else
	{
		cout << "INVALID";
	}

	



	return 0;
}