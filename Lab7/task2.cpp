#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double g,f;
	cout << "Vvedite radiany - ";
	cin >> g;
	if (g < 0 || g > 3.14 * 2)
	{
		cout << "!!!vihod za predely!!!";
	}
	else
	{
		f = g * 180 / 3,14;
		cout << "Ugol raven " << f << " gradusov";
	}
	return 0;
}
