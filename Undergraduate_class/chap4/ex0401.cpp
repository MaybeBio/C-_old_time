#include<iostream>
using namespace std;
int main()
{
	float a, b, c, max;
	cout << "��������������" << endl;
	cin >> a >> b >> c;
	max = a;
	if (max < b)max = b;
	if (max < c)max = c;
	cout << "������ֵ��" << max;
	return 0;


}