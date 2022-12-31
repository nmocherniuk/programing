#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float a1, b1, c1, a2, b2, c2, Dx, Dy, Determinant, x, y, kol1, kol2, kol3;
    cout <<"���������� a1 ����� � ( _ ; b1; c1) = ";cin >> a1;
    cout <<"���������� b1 ����� � ( " << a1 << "; _ ; c1) = ";cin >> b1;
    cout <<"���������� c1 ����� � ( " << a1 << "; " << b1 <<"; _ ) = ";cin >> c1;
    cout << endl;
    cout << "A ( " << a1 << "; " << b1 << "; " << c1 << " )" << endl;
    cout << endl;
    cout << "���������� a2 ����� � ( _ ; b2; c2) = ";cin >> a2;
    cout << "���������� b2 ����� � ( " << a2 << "; _ ; c2) = ";cin >> b2;
    cout << "���������� c2 ����� � ( " << a2 << "; " << b2 << "; _ ) = ";cin >> c2;
    cout << endl;
    cout << "B ( " << a2 << "; " << b2 << "; " << c2 << " )" << endl;
    cout << endl;
    cout <<"г������ 1: " << a1 << "x + " << b1 << "y = " << c1 << endl;
    cout <<"г������ 2: " << a2 << "x + " << b2 << "y = " << c2 << endl;
    if (a1 == a2 && b1 == b2 && c1 == c2)
    {
        cout << "���� �������, ���� - Yes" << endl;
    }
    kol1 = a1 / a2;
    kol2 = b1 / b2;
    kol3 = c1 / c2;
    if (kol1 == kol2 && kol2 == kol3 && kol1 == kol3)
    {
        cout << "���� ���������, ���� - No" << endl;
    }
    Dx = (c1 * b2 - b1 * c2);
    Dy = (a1 * c2 - a2 * c1);
    Determinant = (a1 * b2 - a2 * b1);
    x = Dx / Determinant;
    y = Dy / Determinant;
    cout << "���������� ������������ ����� A � B: " << endl;
    cout << " X = " << round(x * 100) / 100 << endl;
    cout << " Y = " << round(y * 100) / 100 << endl;
    cout << endl;
    system("pause");
    return 0;
}