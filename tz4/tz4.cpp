#include <iostream>

using namespace std;

double readNumber()
{
	std::cout << "Enter a double value: ";
	double input{};
	std::cin >> input;

	return input;
}

int main()
{
	double a(readNumber());
	double b(readNumber());
	char let;
	cout << "Enter one of the following : +, -, *, or / : ";
	cin >> let;
	if (static_cast<int>(let) == 43)
		cout << a << let << b << " = " << a + b;
	else if (static_cast<int>(let) == 45)
		cout << a << let << b << " = " << a - b;
	else if (static_cast<int>(let) == 42)
		cout << a << let << b << " = " << a * b;
	else if (static_cast<int>(let) == 47)
		cout << a << let << b << " = " << a / b;
	else
		cout << "This symbol is not a valid mathematical operator.";
}
