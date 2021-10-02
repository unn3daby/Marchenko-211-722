#include <iostream>
#include <cmath>
int main() {
	using namespace std;
	double a, b, c;
	cout << "Vvedite A: ";
	cin >> b;
	a = pow(b, 3) * pow(b, 6);
	c = pow(b, 2) * pow(b, 2)* pow(b,2);
	cout << "A15 = " << a * c;
	return 0;
}