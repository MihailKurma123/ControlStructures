//Pascal's triangle
#include<iostream>
using namespace std;
using  std::cin;
using  std::cout;
using  std::endl;
#define WIDTH 8

#define PASCALS_TRIANGLE
//#define EXCHANGE

void main()
{
	setlocale(LC_ALL, "");

#ifdef PASCALS_TRIANGLE
	int h;
	cout << "¬ведите высоту треугольника: ";  cin >> h;
	int nf = 1;
	for (int i = 0; i < h; i++)
	{
		cout.width(WIDTH / 2);
		cout << "";
	}
	cout << left;//задаЄм выравнивание по левому краю
	cout << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(WIDTH / 2);
			cout << "";
		}
		int mf = 1;
		cout.width(WIDTH);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int mnf = 1;
			for (int mn = 1; mn <= n - m; mn++)
			{
				mnf *= mn;
			}
			cout.width(WIDTH);
			cout << nf / mf / mnf;
		}
		cout << endl;
	}
#endif // Pascals_triangle

#ifdef EXCHANGE
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	a ^= b;
	b ^= a;
	a ^= b;
	cout << a << "\t" << b << endl;
#endif // EXCHANGE

}