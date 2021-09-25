#include <iostream>
#include <math.h>
int main() {
	using namespace std;
	float x1, x2, x3, y1, y2, y3, P, p, s, a, b, c;
	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "x3 = "; cin >> x3;
	cout << "y1 = "; cin >> y1;
	cout << "y2 = "; cin >> y2;
	cout << "y3 = "; cin >> y3;
	a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	b = sqrt(((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3)));
	c = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
	P = a + b + c;
	p = P / 2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "P = " << P << endl << "S = " << s;
	return 0;



}
