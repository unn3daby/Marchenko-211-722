#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, d;
	cout << "vvedite dvyznachnoye chislo = ";
	cin >> a;
	if (a > 99 || a < 10)
	{
		cout << "error";
	}
	else 
	{
		b = a % 10;
		c = a / 10;
		d = c % 10;
		cout << "otvet: " << b << d;
	}
}
