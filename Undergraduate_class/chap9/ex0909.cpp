
//�ó��������ά�����ȫ��Ԫ�أ�������ָ����������壨�������������ݵĸ������������

#include<iostream>
using namespace std;
int main()
{
	int a[3][4] = { 0,1,2,3 }, * p;
	for (p = a[0]; p < a[0] + 12; p++)
	{
		if ((p - a[0]) % 4 == 0)
		{
			cout << endl;
		}
		cout << *p << '\t';
	}
	return 0;
}