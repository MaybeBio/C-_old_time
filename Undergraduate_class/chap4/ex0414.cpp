//Ѱ�������������Լ������С������

#include<iostream>
using namespace std;
int main()
{
	int x, y, i, k;
	cout << "������������";
	cin >> x >> y;
	k = x > y ? y : x;
	for (i = k; i >= 1; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			break;
		}
	}
	cout << "���Լ��" << i << endl;
	k = x < y ? y : x;
	for (i = k; i <= x * y; i++)
	{
		if (i % x == 0 && i % y == 0)
		{
			break;
		}
		
	}
	cout << "��󹫱���" << i << endl;
	return 0;

}