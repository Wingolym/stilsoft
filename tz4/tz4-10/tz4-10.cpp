#include <iostream>
using namespace std;

	unsigned int readNumber()
{
	cout << "Enter a positive integer: ";
	unsigned int input;
	cin >> input;

	return input;
}

int main()
{
	unsigned int x( readNumber());
	if (x == 1 or x == 2 or x == 3 or x == 5 or x == 7)
		cout << "The digit is prime\n";
	else if ( x % 2 == 0 or x % 3 == 0 or x % 5 == 0 or x % 7 == 0)
		cout << "The digit is not prime\n";
	else
		cout << "The digit is prime\n";

	
}

