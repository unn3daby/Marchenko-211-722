#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b;
	cout << "byte = ";
	cin >> a;
	b = a / 1024;
	if (a % 1024 == 0){
    cout << "kylobyte = " << b;
  }
  else{
    cout << "kylobyte = " << b+1;
  }
	return 0;
}
