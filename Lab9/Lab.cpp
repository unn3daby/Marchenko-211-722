#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int a, a1, N, K, d, b, c, R1, R2, itog;
	cout << "������� ����� �������: ";
	cin >> a;
	switch (a) 
	{
	case 1:
		cout << "������� N: ";
		cin >> N;
		cout << N % 60 << " - ���������� ������, ��������� � ������ ��������� ������";
		break;
	case 2:
		cout << "������� ����� ���: ";
		cin >> K;
		cout << (K % 7)  << " - ����� ��� ������";
		break;
	case 3:
		cout << "������� ����� ���: ";
		cin >> K;
		cout << "������� ����� ������� ������ ���� 1 ������: ";
		cin >> N;
		cout << (K + N - 1) % 7 << " - ���� ������";
		break;
	case 4:
		cout << "������� �: ";
		cin >> a1;
		cout << "������� B: ";
		cin >> b; 
		cout << "������� C: ";
		cin >> c;
		R1 = (a1 * b);
		R2 = pow(c, 2);
		itog = R1 / R2;
		cout << "���������� ���������, ����������� �� ��������������: " << itog << endl << "������� ��������� ����� ��������������: " << R1 - itog * R2;
		break;
	case 5:
		cout << "������� ���: ";
		cin >> a1;
		cout << "��������������� ��� ����� ��������: " << (a1-1) / 100 + 1;
		break;

	}
}
