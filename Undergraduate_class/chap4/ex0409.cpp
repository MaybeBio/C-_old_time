#include<iostream>
using namespace std;
int main()
{
	int fee;
	cout << "��������Ĺ���";
	cin >> fee;
	if (fee >= 10000)
	{
		cout << "��Ļ���" << fee * 0.06 << endl;
	}
	else if (fee >= 5000)
	{
		cout << "��Ļ���" << fee * 0.05 << endl;

	}
	else if (fee >= 2000)
	{
		cout << "��Ļ���" << fee * 0.04 << endl;
	}
	else if (fee >= 1000)
	{
		cout << "��Ļ���" << fee * 0.03 << endl;
	}
	else
	{
		cout << "��Ļ���" << fee * 0.02 << endl;
	}
	return 0;
}
