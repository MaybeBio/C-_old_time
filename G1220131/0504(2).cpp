#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	if (x > y)//��xΪСֵ
	{
		int t = x;
		x = y, y = t;
	}
	int r = y % x;
	while (r)
	{
		y = x;
		x = r;
		r = y % x;
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