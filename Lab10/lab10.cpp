#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int a, A, B, C, D, E;
	cout << "Viberite zadanie: ";
	cin >> a;
	switch (a) {
	case 1:
		cout << "vvedite A: ";
		cin >> A;
		cout << "vvedite B: ";
		cin >> B;
		if (A > 2 and B <= 3) {
			cout << "Neravenstva spravedlivy";
		}
		else {
			cout << "Neravenstva nespravedlivy";
		}
		return 0;
	case 2:
		cout << "vvedite A: ";
		cin >> A;
		cout << "vvedite B: ";
		cin >> B;
		cout << "vvedite C: ";
		cin >> C;

		if (A < B and B < C) {
			cout << "Neravenstva spravedlivy";
		}
		else {
			cout << "Neravenstva nespravedlivy";
		}
		return 0;
	case 3:
		cout << "vvedite chislo: ";
		cin >> A;
		if (A % 2 == 0) {
			if (A >= 10 && A < 100) {
				cout << "chislo chetnoe i dvuhznachnoe";
			}
			else {
				cout << "chislo chetnoe i nedvuznachnoe";
			}
		}
		else {
			if (A > 10 && A < 100) {
				cout << "chislo nechetnoe i dvuznachnoe";
			}
			else {
				cout << "chislo nechetnoe i nedvuznachnoe";
			}
		}
		return 0;
	case 4:
		cout << "vvedite chislo\n";
		cin >> A;
			if (A >= 100 && A < 1000) {
				B = A / 100;
				C = (A / 10) % 10;
				D = A % 10;
				if (B > C && C > D) {
					cout << "ubivayushaya posledovatelnost";
				}
				else if(B < C && C < D){
					cout << "vozrastaush'aya posledovatelnost";
				}
				else {
					cout << "error";
				}

			}
			else {
				cout << "error";
			}
		return 0;
	case 5:
		cout << "vvedite chislo\n";
		cin >> a;
		if (a < 10000 && a > 999) {
			A = a / 1000;
			B = (a / 100) % 10;
			C = (a / 10) % 10;
			D = a % 10;
			if (A == D && B == C) {
				cout << "Chislo zerkal'no";
			}
			else {
				cout << "chislo nezerkal'no";
			}
		}
		else {
			cout << "out of range";
		}
		return 0;
	
	case 6:
		cout << "vvedite storonu a ";
		cin >> A;
		cout << "vvedite storonu b: ";
		cin >> B;
		cout << "vvedite storonu c: ";
		cin >> C;
		if ((A * A == B * B + C * C) || (B * B == A * A + C * C) || (C * C == A * A + B * B)) {
			cout << "treugolnic pryamougolniy";
		}
		else {
			cout << "treugolnic nepryamougolniy";
		}
		return 0;
	case 7:
		cout << "vvedite storonu a ";
		cin >> A;
		cout << "vvedite storonu b: ";
		cin >> B;
		cout << "vvedite storonu c: ";
		cin >> C;
		if ((A + B) > C && (B + C) > A && (B + A) > C) {
			cout << "treugolnic sushestvuet";
		}
		else {
			cout << "treugolnica ne sushestvuet";
		}
	}
}















