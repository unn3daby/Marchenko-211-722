#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int sw;
	 start:
	cout << "\nВведите номер задания: ";
	cin >> sw;
	switch (sw) {
	case 1: {
		int a, b, s;
		cout << "Введите А: ";
		cin >> a;
		cout << "Введите B: ";
		cin >> b;
		int i = a;
		cout << endl;
		for (i; i <= b; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << i << " ";
			}

		}
		
				goto start;
			}
	
	
	case 2: {
		int i, a, b;
		cout << "Введите A: ";
		cin >> a;
		cout << "Введите B: ";
		cin >> b;
		if (a > b) {
			while (a > 0) {
				i = a - b;
				a = a - b;
			}
			cout << "Длина незанятного пространства:  " << i + b<< endl;
			goto start;
		}
		else {
			cout << "!!!B > A!!!";
			goto start;
		}
	}
	case 3: {
		int i = 0, n, k = 0;
		cout << "Введите N: ";
		cin >> n;
		if (n > 1) {
			while (i <= n) {
				k++;
				i += k;
			}
			cout << "Наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K будет больше или равна N: " << k << "\nСумма чисел: " << i<< endl;
			goto start;
		}
		else {
			cout << "!!! N < 1 !!!";
			goto start;
		}
	}
	case 4: {
		int p, k = 0, d, c = 1000;
		float a = 1000;
		cout << "Введите проценты: ";
		cin >> p;
		while (a < 1101) {
			a += a * p / 100;
			k++;
		}
		cout << "Итоговый размер вклада S (вещественное число): " << a <<"\nКоличество месяцев K (целое число): "<< k;
		goto start;
	}
	case 5: {
		long int A, B;

		cout << "Введите 2 числа: \n";
		cout << "A = ";
		cin >> A;
		cout << "B = ";
		cin	>> B;

		while (A != B) {

			if (A > B)

				A = A - B;

			else

				B = B - A;

		}

		cout << "НОД этих чисел: " << A<<endl;
		goto start;
	}
	case 6: {
		int n;
		cout << "Введите N:";
		cin >> n;
		int f1 = 1, f2 = 1, f = 0, k = 2;
		while (f < n) {
			++k;
			f = f2 + f1;
			f2 = f1;
			f1 = f;
		}
		cout << "k:" << k;
		goto start;
	}
	default: cout << "Здесь всего 6 заданий :(\n"; goto start;
	

	}
}