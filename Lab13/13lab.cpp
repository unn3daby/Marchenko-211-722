#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int sw, k, n, i;
	float cst, kg, a;
	
	start:
	cout << "Введите номер задания: ";
	cin >> sw;
	switch (sw) {
	case 1: {
		cout << "Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет."<<endl;
		cout <<"Введите цену конфет за 1 кг в рублях: ";
		cin >> cst;
		for (kg = 0.1; kg < 1.1; kg += 0.1) {
			cout << kg << " кг. конфет cтоит " << kg * cst<<" рублей"<< endl;
		}
		goto start;
	}
	case 2: {
		cout << "Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей)." << endl;
		long double p = 1;
		long double d = 1.1;
		cout << "Введите число: ";
		cin >> n;
		for (k = 1; k < n; k++) {
			p *= d;
			d += 0.1;
		}
		cout << "Результат = " << p << endl;
		goto start;
	}
	case 3: {
		cout << "Дано целое число N(> 0).Найти квадрат данного числа, используя для его вычисления следующую формулу : N2 = 1 + 3 + 5 + . . . + (2·N − 1).\nПосле добавления к сумме каждого слагаемого выводить текущее значение суммы" << endl;
		int sum = 0;
		cout << "n = ";
		cin >> n;
		for (int i = 1; i <= 2 * n - 1; i += 2) {
			sum += i;
			cout << sum << endl;
		}
		goto start;
	}
	case 4: {
		cout << "Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A^2 + A^3 + . . . + A^N" << endl;
		cout << "A:";
		cin >> a;
		cout << "N:";
		cin >> n;
		float a2 = 1, rez = 1;
		for (i = 2; i <= n; ++i)
		{
			a2 *= a;
			rez += a2;
		}
		cout << rez << endl;
		goto start;

	}
	case 5: {
		cout << "Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения\n1 − A + A2 − A3 + . ..± AN .\nУсловный оператор не использовать.\n";
		cout << "A:";
		cin >> a;
		cout << "N:";
		cin >> n;
		float a2 = 1, rez = 1;
		for (i = 2; i <= n; ++i)
		{
			a2 *= -a;
			rez += a2;
		}
		cout << rez << endl;
		goto start;
	}
	default: {
		cout << "Такого задания нет, введите число от 1-4\n";
		goto start;
	}
	}

}

