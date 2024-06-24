#include <iostream>
#include "io.h"

using namespace std;

int main()
{
	int a(readNumber());
	int b(readNumber());
	int num = {a+b};
	print(num,a,b);
}