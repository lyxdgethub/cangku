#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	char c;
	int a;
	float f;
	cin >> c >> a >> f;
	a = a + c;
	f = f + 2 * a;
	cout << "c=" << c << "  a=" << a;
	cout << setiosflags(ios::fixed) << setprecision(1) << "  f=" << f << endl;
	system("pause");
	return 0;

}