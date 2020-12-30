#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, F, x, xp, xk, dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	if (dx == 0 || xp >= xk) 
	{
		cout << "Error!";
		return 1;
	}

	cout <<"-------------"<<endl
		 << "|" << setw(6) << "F" << setw(6) << "|"<<endl
		 <<"-------------";

	x = xp;
	while (x <= xk) 
	{
		if (x < 0 && b != 0) 
		{
			F = a - x / (10 + b);
		}
		if (b == 0 && x > 0) 
		{
			F = (x - a) / (x - c);
		}
		else 
		{
			F = 3 * x + 2 / c;
		}
		x += dx;
		cout <<endl<<"|"<<setw(6)<<setprecision(2)<< F <<setw(6)<<"|"<<endl;
	}
	
}
