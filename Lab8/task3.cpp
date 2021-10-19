#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	if (a < b)
	{
		cout << "error";
	}
	else
	{
		cout << "the number of segmen = " << double(a % b);
	}
	return 0;
}
