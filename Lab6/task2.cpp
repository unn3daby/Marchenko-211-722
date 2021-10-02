#include <iostream>
#include <math.h>
int main() {
	using namespace std;
	double a, b, c, d, e;
	cout << "Vvedite A"<< endl;
	cin >> a;
	cout << "Vvedite B"<< endl;
	cin >> b;
	cout << "Vvedite C" << endl;
	cin >> c;
	d = b;
	b = a;
	e = c;
	c = d;
	a = e;


	cout << "B = " << b << endl << "A = " << a << endl << "C = " << c;
}
