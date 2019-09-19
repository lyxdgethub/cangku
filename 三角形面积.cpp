#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	float p,s;
	cout<<"请输入三角形三边：";
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << "s=" << s;
	system("pause");
	return 0;
}