#include <iostream>
using namespace std;
#include<ctime>
#include<cstring>
struct student
{
	int num;
	char name[20];
	float score[40];
};
int main()
{
	srand(time(NULL));
	void print(student);
	student stu = { 2468 };
	strcpy_s(stu.name, "LiWen");
	for (int i = 0; i < 4; i++)
	{
		stu.score[i] = rand() % 100;
	}
	print(stu);
	return 0;
}
void print(student stu)
{
	cout << "ѧ��\t" << stu.num << endl;
	cout << "����\t" << stu.name << endl;
	cout << "��ѧ\t" << stu.score[0] << endl;
	cout << "����\t" << stu.score[1] << endl;
	cout << "Ӣ��\t" << stu.score[2] << endl;
	cout << "��ѧ\t" << stu.score[3] << endl;
}