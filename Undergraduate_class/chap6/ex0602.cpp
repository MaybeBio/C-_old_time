
//�ó����ñȽ����������Ԫ�صĴ�С�����Ԫ�صıȽϣ��Լ��ڱȽ�֮��ͳ�ƶ�Ӧ�Ķ�Ӧ������������Ԫ�صĶ��ٱȽϸ���������˵��a�����b���������Լ��ٶ��ٻ�������ȵ�Ԫ�ظ����ж���

#include<iostream>
using namespace std;
int main()
{
	int large(int, int);
	int a[10], b[10], i, great = 0,equal = 0, less = 0, n;
	//  great��a�������ĸ�����equal����ȵĸ�����less�Ǹ��ٵĸ���

	cout << "����������Ԫ�صĸ���\t";
	cin >> n;
	cout << "��������a:\n";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "��������b:\n";
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (i = 0; i < n; i++)
	{
		int r;
		if ((r = large(a[i], b[i]) )== 1)
		{
			great += 1;

		}
		else if (r == 0)
		{
			equal += 1;

		}
		else
		{
			less += 1;
		}
	}
        cout << "a[i]����b[i]�Ĵ���" << great << endl;
		cout << "a[i]����b[i]�Ĵ���" << equal << endl;
		cout << "a[i]С��b[i]�Ĵ���" << less<< endl;
		if (great > less)
		{
			cout << "����a>����b" << endl;
		}
		else if (great < less)
		{
			cout << "����a<����b" << endl;
		}
		else
		{
			cout << "����a=����b" << endl;
		}
		return 0;
}
 
int large(int x, int y)
{
	int flag;
	if (x > y)
	{
		flag = 1;
	}
	else if (x == y)
	{
		flag = 0;
	}
	else
	{
		flag = -1;
	}
	return (flag)
		;
}