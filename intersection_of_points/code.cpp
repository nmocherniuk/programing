#include<iostream>
using namespace std;

int main()
{
    float a1, b1, c1, a2, b2, c2, Dx, Dy, Determinant, x, y, kol1, kol2, kol3;
    cout <<"Coordinate a1 of point A ( _ ; b1; c1) = ";cin >> a1;
    cout <<"Coordinate b1 of point A ( " << a1 << "; _ ; c1) = ";cin >> b1;
    cout <<"Coordinate c1 of point A ( " << a1 << "; " << b1 <<"; _ ) = ";cin >> c1;
    cout << endl;
    cout << "A ( " << a1 << "; " << b1 << "; " << c1 << " )" << endl;
    cout << endl;
    cout << "Coordinate a2 of point A ( _ ; b2; c2) = ";cin >> a2;
    cout << "Coordinate b2 of point A ( " << a2 << "; _ ; c2) = ";cin >> b2;
    cout << "Coordinate c2 of point A ( " << a2 << "; " << b2 << "; _ ) = ";cin >> c2;
    cout << endl;
    cout << "B ( " << a2 << "; " << b2 << "; " << c2 << " )" << endl;
    cout << endl;
    cout <<"Equation 1: " << a1 << "x + " << b1 << "y = " << c1 << endl;
    cout <<"Equation 2: " << a2 << "x + " << b2 << "y = " << c2 << endl;

    if (a1 == a2 && b1 == b2 && c1 == c2)
    {
        cout << "They coincided directly, therefore - Yes" << endl;
    }

    kol1 = a1 / a2;
    kol2 = b1 / b2;
    kol3 = c1 / c2;
    if (kol1 == kol2 && kol2 == kol3 && kol1 == kol3)

    {
        cout << "Lines are parallel, therefore - No" << endl;
    }

    // solving the system by the Cramer method through the matrix

    Dx = (c1 * b2 - b1 * c2);
    Dy = (a1 * c2 - a2 * c1);
    Determinant = (a1 * b2 - a2 * b1);
    x = Dx / Determinant;
    y = Dy / Determinant;

    cout << "Coordinates of the intersection of points A and B: " << endl;
    cout << " X = " << round(x * 100) / 100 << endl;
    cout << " Y = " << round(y * 100) / 100 << endl;
    cout << endl;
    system("pause");
    return 0;
}