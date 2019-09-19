#include<iostream>
using namespace std;
void main()
{
	int a, b, c;
	char d, e;
	int f;
	int n, m;//天数，星期数
	cout << "请输入日期：（eg:2019-9-19）\n";
	cin >> a>>d>>b>>e>>c;
	//cout << a << d << b << e << c<<"\n";
	if (a % 4== 0)
	{
		if (a % 100 == 0)
		{
			if (a % 400 == 0)
				f = 1;
			else
				f = 0;
		}
		else
			f = 1;
	}
	else f = 0;
	//cout << f;
	if (f == 0)
	{
		switch (b)
		{
		case 1:n = c; break;
		case 2:n = c + 31; break;
		case 3:n = c + 59; break;
		case 4:n = c + 90; break;
		case 5:n = c + 120; break;
		case 6:n = c + 151; break;
		case 7:n = c + 181; break;
		case 8:n = c + 212; break;
		case 9:n = c + 243; break;
		case 10:n = c + 273; break;
		case 11:n = c + 304; break;
		case 12:n = c + 334; break;

		}
	}
	else
	{
		switch (b)
		{
		case 1:n = c; break;
		case 2:n = c + 31; break;
		case 3:n = c + 60; break;
		case 4:n = c + 91; break;
		case 5:n = c + 121; break;
		case 6:n = c + 152; break;
		case 7:n = c + 182; break;
		case 8:n = c + 213; break;
		case 9:n = c + 244; break;
		case 10:n = c + 274; break;
		case 11:n = c + 305; break;
		case 12:n = c + 335; break;

		}
	}
		//2018-1-1是周一
	int r, s, t;
	if (a >= 2018)
	{
		r = a - 2018;
		s = 365 * r + (r / 4);
		t = s % 7;
	}
	else
	{
		r = 2018 - a;
		s = 365 * r + (r / 4);
		t = 7 - (s % 7);
	}
	
	//cout << t << "\n";
	if (t == 0)
		m = n / 7;
	else
		m = (n - 7 + t) / 7 + 1;

	cout << a << d << b << e << c << "是该年第" << n << "天第"<<m<<"周\n";
    system("pause");
}