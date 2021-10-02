#include <iostream>
#include <cmath>
int main() {
	using namespace std;
	double y, x;
	cout << "Vvedite x" << endl;
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "y = " << y;
	return 0;
}