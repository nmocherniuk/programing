#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float a1, b1, c1, a2, b2, c2, Dx, Dy, Determinant, x, y, kol1, kol2, kol3;
    cout <<"Координата a1 точки А ( _ ; b1; c1) = ";cin >> a1;
    cout <<"Координата b1 точки А ( " << a1 << "; _ ; c1) = ";cin >> b1;
    cout <<"Координата c1 точки А ( " << a1 << "; " << b1 <<"; _ ) = ";cin >> c1;
    cout << endl;
    cout << "A ( " << a1 << "; " << b1 << "; " << c1 << " )" << endl;
    cout << endl;
    cout << "Координата a2 точки А ( _ ; b2; c2) = ";cin >> a2;
    cout << "Координата b2 точки А ( " << a2 << "; _ ; c2) = ";cin >> b2;
    cout << "Координата c2 точки А ( " << a2 << "; " << b2 << "; _ ) = ";cin >> c2;
    cout << endl;
    cout << "B ( " << a2 << "; " << b2 << "; " << c2 << " )" << endl;
    cout << endl;
    cout <<"Рівняння 1: " << a1 << "x + " << b1 << "y = " << c1 << endl;
    cout <<"Рівняння 2: " << a2 << "x + " << b2 << "y = " << c2 << endl;
    if (a1 == a2 && b1 == b2 && c1 == c2)
    {
        cout << "Прямі співпали, тому - Yes" << endl;
    }
    kol1 = a1 / a2;
    kol2 = b1 / b2;
    kol3 = c1 / c2;
    if (kol1 == kol2 && kol2 == kol3 && kol1 == kol3)
    {
        cout << "Прямі паралельні, тому - No" << endl;
    }
    Dx = (c1 * b2 - b1 * c2);
    Dy = (a1 * c2 - a2 * c1);
    Determinant = (a1 * b2 - a2 * b1);
    x = Dx / Determinant;
    y = Dy / Determinant;
    cout << "Координати переперетину точок A і B: " << endl;
    cout << " X = " << round(x * 100) / 100 << endl;
    cout << " Y = " << round(y * 100) / 100 << endl;
    cout << endl;
    system("pause");
    return 0;
}