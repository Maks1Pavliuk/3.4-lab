// Lab_03_4.cpp
// < ������ ������ >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 10
#include <iostream>
#include <cmath> // ��� pow
using namespace std;

int main()
{
    double x; // ������� ��������
    double y; // ������� ��������
    double R;
    double a;
    double b;

    // �������� �������
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    // ������������ � ����� ����
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
