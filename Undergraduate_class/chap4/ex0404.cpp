#include<iostream>
using namespace std;
int main()
{
	float score;
	cout << "������ɼ�";
	cin >> score;
	if (score >= 90)
	{
		cout << "�ɼ�ΪA" << endl;
	}
	else if (score >= 80)
	{
		cout << "�ɼ�ΪB" << endl;
	}
	else if (score >= 70)
	{
		cout << "�ɼ�ΪC" << endl;
	}
	else if (score >= 60)
	{
		cout << "�ɼ�ΪD" << endl;

	}
	else
	{
		cout << "������";

	}
	return 0;
}
