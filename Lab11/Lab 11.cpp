#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sw, a, b, c, x, ab, ac, x1, x2, y1, y2, y;
    cout << "Viberite zadanie: ";
    cin >> sw;
    switch (sw) {
    case 1:
        cout << "Vvedite A: ";
        cin >> a;
        cout << "Vvedite B: ";
        cin >> b;
        if (a == b) {
            a = 0;
            b = 0;
        }
        if (a > b) {
            b = a;
        }
        else {
            a = b;
        }
        cout << "A = " << a << endl << "B = " << b;
    case 2:
        cout << "Vvedite A: ";
        cin >> a;
        cout << "Vvedite B: ";
        cin >> b;
        cout << "Vvedite C: ";
        cin >> c;
        if (a <= b && a <= c) {
            cout << "Summa naibol'shih dvuh: " << b + c;
        }
        else if (b <= a && b <= c) {
            cout << "Summa naibol'shih dvuh: " << a + c;
        }
        else if (c <= a && c <= b) {
            cout << "Summa naibol'shih dvuh: " << a + b;
        }
    case 3:
        cout << "Vvedite koordinaty x tochki A: ";
        cin >> x;
        cout << "Vvedite koordinaty y tochki A: ";
        cin >> y;
        cout << "Vvedite koordinaty x tochki B: ";
        cin >> x1;
        cout << "Vvedite koordinaty y tochki B: ";
        cin >> y1;
        cout << "Vvedite koordinaty x tochki C: ";
        cin >> x2;
        cout << "Vvedite koordinaty y tochki C: ";
        cin >> y2;

        ab = sqrt((pow(x1, 2) - pow(x, 2)) + (pow(y1, 2) - pow(y, 2)));
        ac = sqrt((pow(x2, 2) - pow(x, 2)) + (pow(y2, 2) - pow(y, 2)));
        if (ab < ac) {
            cout << "B blizhe k A";
        }
        else {
            cout << "C blizhe k A";
        }
    case 4:
        cout << "Vvedite koordinaty x tochki: ";
        cin >> x;
        cout << "Vvedite koordinaty y tochki: ";
        cin >> y;
        if (x == 0 || y == 0) {
            cout << "tochka ne dolzhna lezhat' na koordnatnoy osi";

        }
        else if (x > 0 && y > 0) {
            cout << "tochka lezhit v 1 chetverti";
        }
        else if (x < 0 && y > 0) {
            cout << "tochka lezhit v 2 chetverti";
        }
        else if (x < 0 && y < 0) {
            cout << "tochka lezhit v 3 chetverti";
        }
        else if (x > 0 && y < 0) {
            cout << "tochka lezhit v 4 chetverti";
        }
    case 5:
        cout << "Vvedite chislo: ";
        cin >> a;
        if (a == 0) {
            cout << "nulevoe chislo";
        }
        else if (a % 2 == 0) {
            if (a > 0) {
                cout << "polozhitelnoye chetnoe chislo";
            }
            else {
                cout << "otricatelnoye chetnoe chislo";
            }
        }
        else {
            if (a > 0) {
                cout << "polozhitelnoye nechetnoe chislo";
            }
            else {
                cout << "otricatelnoye nechetnoe chislo";
            }
        }
    case 6:
        cout << "Vvedite chislo: ";
        cin >> a;
        if (a < 1 && a > 999) {
            cout << "out of range";
        }
        else if (a < 10) {
            if (a % 2 == 0) {
                cout << "chetnoe odnoznachnoye chislo";
            }
            else {
                cout << "nechetnoe odnoznachnoye chislo";
            }
        }
        else if (a >= 10 and a < 100) {
            if (a % 2 == 0) {
                cout << "chetnoe dvyznachnoe  chislo";
            }
            else {
                cout << "nechetnoe dvyznachnoe chislo";
            }

        }
        else if (a >= 100 and a <= 999) {
            if (a % 2 == 0) {
                cout << "chetnoe trexznachnoe chislo";
            }
            else {
                cout << "nechetnoe trexznachnoe chislo";
            }
        }
    }
}