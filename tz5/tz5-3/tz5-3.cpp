#include <iostream>

using namespace std;

bool isEven(int number)
{
	return number % 2 == 0;
}

int readNumber()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}


int main()
{
	int num (readNumber());
	bool tf (isEven(num));
	if (tf)
		cout << num << " is even";
	else
		cout << num << " is odd";

}
