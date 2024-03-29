//example2_13.cpp: 引用返回函数的定义及三种调用示例
#include <iostream>
using namespace std;
int& Fun(const int &x, int &y, int z)   //返回引用的函数
{
	z++;                       //对值形式参数的修改不会影响对应实际参数变量
	y = x + y + z;                   //通过修改y改变第2个实际参数变量的值
	return x;                    //返回的是引用参数，实际上是对应实参变量
}
int main()
{
	int a = 1, b = 2, c = 3, d = 0;
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	Fun(a, b, c);               //作为独立的函数调用语句使用，返回值被忽略
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	d = Fun(a, b, c);             //作为表达式中的一个运算对象使用，返回值参与运算
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	Fun(a, b, c) = 20;            //左值调用，引用返回的函数特有方式，相当于b=20；
	cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
	system("pause");
	return 0;
}