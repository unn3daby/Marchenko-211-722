#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double g,f;
	cout << "Vvedite gradysi - ";
	cin >> g;
	if (g < 0 || g > 360)
	{
		cout << "!!!vihod za predely!!!";
	}
	else
	{
		f = g * 3.14 / 180;
		cout << "Ugol raven " << f << " radian";
	}
	return 0;
}
