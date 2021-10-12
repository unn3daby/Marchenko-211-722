#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double A1, A2, B1, B2, C1, C2, D, x, y;
	cout << "vvedite A1 ";
	cin >> A1;
	cout << "vvedite A2 ";
	cin >> A2;
	cout << "vvedite B1 ";
	cin >> B1;
	cout << "vvedite B2 ";
	cin >> B2;
	cout << "vvedite C1 ";
	cin >> C1;
	cout << "vvedite C2 ";
	cin >> C2;
	D = D = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / D;
	y = (A1 * C2 - A2 * C1) / D;
	cout << "x = " << x << endl << "y = " << y;
}
