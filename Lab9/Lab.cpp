#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int a, a1, N, K, d, b, c, R1, R2, itog;
	cout << "Введите номер задания: ";
	cin >> a;
	switch (a) 
	{
	case 1:
		cout << "Введите N: ";
		cin >> N;
		cout << N % 60 << " - количество секунд, прошедших с начала последней минуты";
		break;
	case 2:
		cout << "Введите номер дня: ";
		cin >> K;
		cout << (K % 7)  << " - номер дня недели";
		break;
	case 3:
		cout << "Введите номер дня: ";
		cin >> K;
		cout << "Введите каким номером недели было 1 января: ";
		cin >> N;
		cout << (K + N - 1) % 7 << " - День недели";
		break;
	case 4:
		cout << "Введите А: ";
		cin >> a1;
		cout << "Введите B: ";
		cin >> b; 
		cout << "Введите C: ";
		cin >> c;
		R1 = (a1 * b);
		R2 = pow(c, 2);
		itog = R1 / R2;
		cout << "Количество квадратов, размещенных на прямоугольнике: " << itog << endl << "Площадь незанятой части прямоугольника: " << R1 - itog * R2;
		break;
	case 5:
		cout << "Введите год: ";
		cin >> a1;
		cout << "Соответствующий ему номер столетия: " << (a1-1) / 100 + 1;
		break;

	}
}
