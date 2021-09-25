#include <iostream>
int main() {
	using namespace std;
	int A, B, C;
	cout << "vvedite A" << endl;
	cin >> A;
	cout << "vvedite B" << endl;
	cin >> B; 
	cout << "vvedite C" << endl;
	cin >> C;
	cout << "AC = " << C - A << endl << "BC = " << C - B << endl << "sum = " << (C - A) + (C - B);
	return 0;
}