#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	while (x != y)
	{
		if (x > y)
		{
			int t = x;
			x = y;
			y = t;
		}
		y -= x;
	}
	return x;
}
int main()
{
	while (1)
	{
		int x, y;
		cout << "��������������" << endl;
		cin >> x >> y;
		cout << "�������������Լ��Ϊ" << gcd(x, y) << endl;
	}
}