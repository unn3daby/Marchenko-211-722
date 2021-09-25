#include <iostream>
#include <math.h>
int main() {
	using namespace std;
	double x1, x2, y1, y2;
	cout << "vvedite x1" << endl;
	cin >> x1;
	cout << "vvedite x2" << endl;
	cin >> x2;
	cout << "vvedite y1" << endl;
	cin >> y1;
	cout << "vvedite y2" << endl;
	cin >> y2;
	cout << sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	return 0;
}
