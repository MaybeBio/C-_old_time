#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "��������������" << endl;
	cin >> a >> b >> c;
	cout << "����������" << ((a > b ? a : b) < c ? c : (a > b ? a : b));
	return 0;


}