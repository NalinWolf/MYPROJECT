#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, b, h, n, r, s,  y, sum, a;
	int k;
	setlocale(0, "Rus");
	cout << "������� ����� a- " << endl;
	cin >> a;
	cout << "������� ����� b- " << endl;
	cin >> b;
	cout << "������� ����� h- " << endl;
	cin >> h;
	cout << "������� ����� n- " << endl;
	cin >> n;
	
	for (x=a; x <= b; x += h)
	{
		s = r = 1;
		for (k = 1; k <= n; ++k)
		{
			r = r/k;
			s += r * cos(k*x);
		}
		y = exp(cos(x)) * cos(sin(x));
		sum = abs(s - y);
		cout << "x=" << x << " S(x)=" << s << " Y(x)=" << y <<" |Y(x)-S(x)|=" <<sum<< endl;

	}
	
	return 0;
}
