
#include <iostream>

using namespace std;
void print(int x, int a, int b)
{
	cout << a << "+" << b << "=" << x;
}

int readNumber()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}
