#include <iostream>
int main() {
	using namespace std;
	int x1, x2, y1, y2, a, b;
	cout << "vvedite x1" << endl;
	cin >> x1;
	cout << "vvedite x2" << endl;
	cin >> x2;
	cout << "vvedite y1" << endl;
	cin >> y1;
	cout << "vvedite y2" << endl;
	cin >> y2;
	a = x2 - x1;
	b = y2 - y1;
	cout << "P = " << 2 * (a + b) << endl << "S = " << a * b;
	return 0;
}
