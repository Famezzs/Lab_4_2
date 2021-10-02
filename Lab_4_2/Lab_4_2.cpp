// Lab_4_2.cpp
// Козубенко Андрій
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 10

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "y" << "       |" << endl;
	cout << "---------------------------" << endl;

	for (double x = xp; x <= xk; x += dx)
	{
		A = 4.95 * x * x;

		if (x < -3.5)
			B = 4.0 + 1.0 / x * x;
		else
			if (x >= 1.0)
				B = sin(3.0 * x) - cos(1.0 * x);
			else
				B = tan((3.5 + x) / 5.0);
		y = A + B;

		cout << "|" << setw(7) << setprecision(2) << x
			 << "   |" << setw(10) << setprecision(3) << y
			 << "    |" << endl;
	}
	cout << "---------------------------" << endl;

	return 0;
}