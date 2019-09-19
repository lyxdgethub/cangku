//ax^2+bx+c=0
#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c;
	float x1, x2, p;
	cout << "ÇëÊäÈëa,b,c:";
	cin >> a >> b >> c;
	cout << a << "x^2+" << b << "x+" << c << "=0\n";
	p = sqrt(b*b - 4 * a*c);
	cout <<"p="<< p<<"\n";
	if (p >= 0)
	{
		cout << "p>=0\n";
		x1 = (-b + p) / (2 * a);
		x2 = (-b - p) / (2 * a);
		cout << "x1=" << x1 << "\n" << "x2=" << x2<<"\n";
	}
	if (p < 0)
	{
		cout << "p<0\n";
		cout << "x1=" << (-b) /( 2 * a) << "+" << (-p) /( 2 * a) << "i\n";
		cout << "x2=" << (-b) / (2 * a )<< "-" << (-p) / (2 * a )<< "i\n";
	}
	system("pause");
		return 0;
}
