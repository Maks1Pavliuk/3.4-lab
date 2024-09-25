// Lab_03_4.cpp
// < Павлюк Максим >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10
#include <iostream>
#include <cmath> // для pow
using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // вхідний параметр
    double R;
    double a;
    double b;

    // Введення значень
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    // Розгалуження в повній формі
    if ((pow(x, 2) + pow(y, 2) >= pow(R, 2) && (x >= a || x <= -a)) ||
        (pow(x, 2) + pow(y, 2) >= pow(R, 2) && (y >= b || y <= -b)))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
