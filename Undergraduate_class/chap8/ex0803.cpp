#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
	int num;
	char name[20];
	float score;
};
student input()
{
	student stu;
	cout << "������ѧ�ţ������Լ��ɼ���";
	cin >> stu.num >> stu.name >> stu.score;
	return stu;
}
void output(student stu)
{
	cout << stu.num << '\t' << stu.name << '\t' << stu.score << endl;
 }
int main()
{
	int i;
	student stus[3];
	for (i = 0; i < 3; i++)
	{
		stus[i] = input();
	}
	cout << "ѧ��" << '\t' << "����" << '\t' << "�ɼ�" << endl;
	for (i = 0; i < 3; i++)
	{
		output(stus[i]);
	}
	cout << endl;
	return 0;
}