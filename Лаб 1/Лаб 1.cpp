#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cout << "Введите коэффициенты A, B и C: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "коэффициент A не должен быть равен нулю. Введите другой А: ";
        cin >> a;
    }

    double d = b * b - 4 * a * c;
    cout << d;

    double x1 = (-b - sqrt(d)) / (2 * a);
    double x2 = (-b + sqrt(d)) / (2 * a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}