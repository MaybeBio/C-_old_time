#include<iostream>
using namespace std;
int main()
{
	char grade;
	cout << "���������Ӣ�ĳɼ�";
	cin >> grade;
	switch (grade) 
	{
            case('a'):
			case('b'):
			case('c'): {
				cout << "����" << endl;
				break;
			}
			default: {cout << "������"; }
	}
	return 0;
}