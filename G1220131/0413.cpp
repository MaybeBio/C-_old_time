#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i=1000, a, b, c, d,j,num=0;
	while (i <= 9999)
	{
		a = i / 1000;
		b = i % 1000 / 100;
		c = i % 100 / 10;
		d = i % 10;
			if (a == d && b == c)
			{
				cout << i << '\t';
				num++;
				if (num % 6 == 0)
				{
					printf("\n");
				}
			}
			i++;
	}
	cout << "��λ���й�����" << num << "��������" << endl;
	system("pause");
}