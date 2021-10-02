#include <iostream>
#include <cmath>
int main() {
	using namespace std;
	int a, x;
	cout << "Vvedite x" << endl;
	cin >> x;
	a = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "x = " << a;
	return 0;
}