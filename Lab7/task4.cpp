#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double x, y, z, a, d;
	cout << "vvedite skorost 1 avto: ";
	cin >> x;
	cout << "vvedite skorost 2 avto: ";
	cin >> y;
	cout << "vvedite rasstoyanie mezhdy avto: ";
	cin >> z;
	cout << "vvedite vremya: ";
	cin >> a;
	cout << "rasstoyanie mezhdy avto cherez zadannoye vremya = "<< z + x*a + y*a;
}
