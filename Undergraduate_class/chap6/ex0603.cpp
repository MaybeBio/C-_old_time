//�ó�������������һ�����飬���������С�궨�壬����ʵ�����������ź������β�ʹ��ͨ���Զ��壬ֻ��һ������

#include<iostream>
using namespace std;
#define N 7
void inverse(int b[], int n)
{
	int i;
	for (i = 0; i < n / 2; i++)
	{
		int t;
		t = b[i];
		b[i] = b[n - 1 - i];
		b[n - 1 - i] = t;
	}
}
int main()
{
	int a[N] = { 1,2,3,4,5,6,7 }, i;
	cout << "ԭʼ����Ԫ��Ϊ��" << endl;
	for (i = 0; i < N; i++)
	{
		cout << a[i] << '\t';
	}
	cout << endl;
	inverse(a, N);
	cout << "����֮�������Ԫ��Ϊ:" << endl;
	for (i = 0; i < N; i++)
	{
		cout << a[i] << '\t';
	}
	cout << endl;
	return 0;
}