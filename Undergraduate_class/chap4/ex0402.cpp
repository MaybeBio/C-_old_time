#include<iostream>
using namespace std;
int main()
{
	float a, b, c, max;
	cout << "��������������" << endl;
	cin >> a >> b >> c;
	if (a < b)
	{
		max = b;
	}
	else
	{
		max = a;
	}
	if (max < c)
	{
		cout << "������ֵ��" << c << endl;
	}
	else
	{
		cout << "������ֵ��" << max << endl;

	}
	return 0;

}