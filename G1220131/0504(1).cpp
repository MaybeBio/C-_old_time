#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	int i;
	if (x > y)
	{
		int t = x;
		x = y;
		y = t;
	}
	i = x;
		while (i > 0)
		{
			if (x % i == 0 && y % i == 0)
			{
				break;
			}
			i--;
		}

	return i;
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