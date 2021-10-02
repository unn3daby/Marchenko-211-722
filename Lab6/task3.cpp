#include <iostream>
int main() {
	using namespace std;
	int a, b, c, d, e;
	cout << "Vvedite A" << endl;
	cin >> a;
	cout << "Vvedite B" << endl;
	cin >> b;
	cout << "Vvedite C" << endl;
	cin >> c;
	d = c;
	c = a;
	e = b;
	b = d;
	a = e;
	cout << "A = " << a << endl << "B = " << b << endl << "C = " << c << endl;
}