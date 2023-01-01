#include <iostream>
using namespace std;

int main()
{
	float a, b, c, D, x1_square, x2_square, D_root, x1, x2, x3, x4;
	cout << "<Solving biquadratic equations>" << endl;
	cout << endl;
	cout << "Enter the coefficient a(can't be equal to 0): ";cin >> a;
	if (a != 0)
	{
		cout << "Enter the coefficient b: ";cin >> b;
		cout << "Enter the coefficient c: ";cin >> c;
		cout << "Equation: (" << a << ")x4 + (" << b << ")x2 + (" << c << ") = 0" << endl;
		D = pow(b, 2) - 4 * a * c;
		if (D>0)
		{
			D_root = sqrt(D);
			x1_square = (-b + D_root) / (2 * a);
			x2_square = (-b - D_root) / (2 * a);
			x1 = (round(sqrt(x1_square)*100))/100;
			x2 = -x1;
			x3 = (round(sqrt(x2_square))*100);
			x4 = -x3;
			if (x1_square >= 0 && x2_square >= 0)
			{
				if (x3 == 0)
				{
					cout << "Root equations:" << endl;
					cout << "x(1) = " << x2 << "\t x(2) = " << x3 << "\t x(3) = " << x1 << endl;
					cout << endl;
				}
				else if (x1 == 0)
				{
					cout << "Root equations:" << endl;
					cout << "x(1) = " << x4 << "\t x(2) = " << x1 << "\t x(3) = " << x3 << endl;
					cout << endl;
				}
				else if (x1 == x3)
				{
					cout << "Root equations:" << endl;
					cout << "x(1) = " << x2 << "\t x(2) = " << x1 << endl;
					cout << endl;
				}
				else
				{
					if (x1 > x3)
					{
						cout << "Root equations:" << endl;
						cout << "x(1) = " << x2 << "\t x(2) = " << x4 << "\t x(3) = " << x3 << "\t x(4) = " << x1 << endl;
						cout << endl;
					}
					if (x3 > x1)
					{
						cout << "Root equations:" << endl;
						cout << "x(1) = " << x4 << "\t x(2) = " << x2 << "\t x(3) = " << x1 << "\t x(4) =  " << x3 << endl;
						cout << endl;
					}
				}
			}
			else if (x1_square < 0)
			{
				if (x3 == 0)
				{
					cout << "x(1) = " << x1_square << endl;
					cout << "x(1) - Is a negative square root of a biquadratic equation, so there are no solutions with this root of the equation" << endl;
					cout << "The only root of the equation:  " << endl;
					cout << "x(1) = " << x3 << endl;
					cout << endl;
				}
				else if (x3 != 0)
				{
					cout << "x(1) = " << x1_square << endl;
					cout << "x(1) - Is a negative square root of a biquadratic equation, so there are no solutions with this root of the equation" << endl;
					cout << "The only root of the equation:  " << endl;
					cout << "x(1) = " << x4 << "\t  x(2) = " << x3 << endl;
					cout << endl;
				}
			}
			else if (x2_square < 0)
			{
				if (x1 == 0)
				{
					cout << "Root equations:" << endl;
					cout << "x(1) = " << x2_square << endl; 
					cout << "x(1) - Is a negative square root of a biquadratic equation, so there are no solutions with this root of the equation" << endl;
					cout << "The only root of the equation:  " << endl;
					cout << "x(1) = " << x1 << endl;
					cout << endl;
				}
				else if (x1 != 0)
				{
					cout << "x(1) = " << x2_square << endl;
					cout << "x(1) - Is a negative square root of a biquadratic equation, so there are no solutions with this root of the equation" << endl;
					cout << "The only root of the equation:  " << endl;
					cout << "x(1) = " << x2 << "\t x(2) = " << x1 << endl;
					cout << endl;
				}
			}
			else if (x1_square < 0 && x2_square < 0)
			{
				cout << "x(1) and x(2) - Is a negative square roots of a biquadratic equation, so there are no solutions with this roots of the equation" << endl;
				cout << "NO" << endl;
				cout << endl;
			}
		}
		else
		{
			cout << "Discriminator can't be lower than zero! Please, change value for variables" << endl;
			cout << "NO" << endl;
			cout << endl;
		}
	}
	else
	{
		cout << "Variable a can't be zero! Please, change value for this variable" << endl;
		cout << endl;
	}

	system("pause");
	return 0;
}