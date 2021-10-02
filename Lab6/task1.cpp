#include <iostream>
#include <math.h>
int main() {
	using namespace std;
	int a, b, c;
	cout << "Vvedite A"<< endl;
	cin >> a;
	cout << "Vvedite B"<< endl;
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "B = " << b << endl << "A = " << a;
}
