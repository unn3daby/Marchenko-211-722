#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double x, y, z, a, d;
	cout << "vvedite kol-vo konfet v kg: ";
	cin >> x;
	cout << "vvedite summ pokypki: ";
	cin >> a;
	d = a / x;
	cout << "vvedite kol-vo kg: ";
	cin >> y;
	z = d * y;
	cout << "stoimost 1 kg = " << d << endl << " stoimost " << y << " kg = " << z;
}
