#include <iostream>
using namespace std;

void poweraA3(float a, float* b)
{
	*b = a * a * a;
}
int sign(float x) {
	if (x < 0) { return -1; }    if (x == 0) { return 0; }    if (x > 0) { return 1; }
}
float RingS(float R1, float R2) {
	float S = 3.14 * (R1 * R1 - R2 * R2);
	if (R1 > R2) {
		return S;
	}
	else {
		return 0;
	}
}
int quarter(float x, float y) {
	if ((x > 0) && (y > 0)) { return 1; }
	if ((x < 0) && (y > 0)) { return 2; }
	if ((x < 0) && (y < 0)) { return 3; }     
	if ((x > 0) && (y < 0)) { return 4; }
}
float fact2(int n) {
	int temp = 1;
	for (; n > 0; n -= 2) temp *= n;
	return temp;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int sw;
start:
	cout << "\nВведите номер задания: ";
	cin >> sw;
	switch (sw) {
	case 1: {
		int i;
		for (i = 1; i <= 5; ++i) {
			float a;
			cout << "\nA = ";
			cin >> a;
			float b;
			poweraA3(a, &b);
			cout << b;
		}
		goto start;
	}


	case 2: {
		float a, b;
		cout << "A: " ;
		cin >> a;
		cout << "B:";
		cin >> b; 

		cout << "Sign(A)+Sign(B): " << sign(a) + sign(b);
		goto start;
	}
	case 3: {
		for (int i = 1; i <= 3; i++) {
			float R1, R2;
			cout << "Введите R1 = ";
			cin >> R1;
			cout << "Введите R2 = ";
			cin >> R2;
			cout << "S" << i << "=" << RingS(R1, R2) << endl;
		}
		goto start;
	}
	case 4: {
		int i;
		for (i = 1; i <= 3; ++i) {
			float x, y;
			cout << "X:";
			cin >> x;
			cout << "Y:";
			cin >> y;
			cout << "Точка находится в " << quarter(x, y) << " координатной четверти\n";
		}
	}
	case 5: { 
		int i, n;
		 cout << "N: ";
		 cin >> n;
		 cout << "Двойной факториал: " << fact2(n);
		 goto start;
	}

	default: cout << "Здесь всего 5 заданий :(\n"; goto start;
	
 }
}