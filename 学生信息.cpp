#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age <= 16 || age >= 25) throw age;
	if (score <= 0 || score >= 5) throw score;
	return age;
	return score;

}
int main()
{
	char a[10];
	int b;
	float c;
	
	cout << "������ѧ����Ϣ\n";
	cin >> a >> b >> c;
	//cout << a;
	try
	{
		checkAgeScore(b, c);
	}
	catch (int)
	{
		cout << "the age is error\n";
	}
	catch (float)
	{
		cout << "the score is error\n";
	}
	cout << a << "\t" << b << "\t" << 20*c;
	system("pause");
	return 0;
}
