#include<iostream>
using namespace std;
double H(int n, double x)
{
	if (0 == n)
	{
		return 1;
	}
	if (1 == n)
	{
		return 2 * x;
	}
	if (n >= 2);
	{
		return 2 * x * H(n - 1, x) - 2 * (n - 1) * H(n - 2, x);
	}
}
int main()
{
	int  n; double x;
	cout << "������n��ֵ" << endl;
	cin >> n;
	cout << "������x��ֵ" << endl;
	cin >> x;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "H(" << i << "," << x << ")=" << H(i, x) << endl;
	}
}