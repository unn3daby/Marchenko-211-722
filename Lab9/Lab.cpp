#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int a, a1, N, K, d, b, c, R1, R2, itog;
	cout << "Vvedite nomer zadaniya: ";
	cin >> a;
	switch (a) 
	{
	case 1:
		cout << "Vvedite N: ";
		cin >> N;
		cout << N % 60 << " - kol-vo secund, proshedshih s nachala posledney secundy";
		break;
	case 2:
		cout << "Vvedite nomer dnya˙: ";
		cin >> K;
		cout << (K % 7)  << " - nomer dnya nedeli";
		break;
	case 3:
		cout << "vvedite nomer dnya: ";
		cin >> K;
		cout << "Kakoi nomer dnya bil 1 january: ";
		cin >> N;
		cout << (K + N - 1) % 7 << " - den' nedeli";
		break;
	case 4:
		cout << "Vvedite A: ";
		cin >> a1;
		cout << "Vvedite B: ";
		cin >> b; 
		cout << "Vvedite C: ";
		cin >> c;
		R1 = (a1 * b);
		R2 = pow(c, 2);
		itog = R1 / R2;
		cout << "Kol-vo kvadratov, razmesh'ennyh na territorii: " << itog << endl << "Ploshad' nezanyatogo postranstva: " << R1 - itog * R2;
		break;
	case 5:
		cout << "Vvedite god: ";
		cin >> a1;
		cout << "Sootovetstvushii nomer stolitiya: " << (a1-1) / 100 + 1;
		break;

	}
}
