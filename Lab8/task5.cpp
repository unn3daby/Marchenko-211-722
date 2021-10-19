#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, d;
	cout << "vvedite trexznachnoye chislo = ";
	cin >> a;
	if (a > 999 || a < 100)
	{
		cout << "error";
	}
	else 
	{
		b = a  % 100;
		c = a / 100;
		cout << "otvet: " << b << c;
	}
}
