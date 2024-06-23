#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter your full name:";
	string name;
	getline(cin >> ws, name);
	cout << "Enter your age: ";
	double age;
	cin >> age;
	cout << "You've lived " << name.length() / age << " years for each letter in your name.";
}
