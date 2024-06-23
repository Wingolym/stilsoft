#include <iostream>
#include "constants.h"

using namespace std;

int main()
{
	cout << "Enter the height of the tower in meters: ";
	double h, haf; cin >> h;
	double t{ 0 };
	haf = h;
	while (haf > 0)
	{
		haf = h - ((cst::grav * (t * t)) / 2);
		if (haf < 0)
			cout << "At " << t << " seconds, the ball is at height: "
				 << 0 << " meters " << '\n';
		else
			cout << "At " << t << " seconds, the ball is at height: "
				 << haf << " meters " << '\n';
		t++;
	}
}
