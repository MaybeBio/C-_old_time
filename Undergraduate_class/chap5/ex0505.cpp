//�ó���ֻ�������е��ۼӻ����Ͻ��д�ӡ�׳ˣ����Ҫ����׳ˣ��ο�֮ǰ�ĳ���

#include<iostream>
using namespace std;
int fac(int n);
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		cout << i << "!=" << fac(i) << endl;
		
	}
	return 0;
}
int fac(int n)
{
	static int i = 1;
	i *= n;
	return i;
}