#include<iostream>
using namespace std;
int fun(int x)
{
	static int a = 3;
	a += x;
	return a;

}
int main()
{
	int k = 2, m = 1, n;
	n = fun(k);
	cout << "��һ��n=" << n << endl;
	n = fun(m);
	cout << "�ڶ���n=" << n << endl;
	return 0;

}