
#include<cstring>
#include<iostream>
// #include<cstdio>
 using namespace std;
class student
{
	char num[10];
	char* name;
	int score;
public:
	student(const char* nump =NULL, char * namep = NULL, int sco=0)
	{
		if (nump)
		{
			strcpy_s(num,strlen(nump)+1, nump);
		}
		else
		{
			strcpy_s(num, strlen("") + 1, "");
		}
		if (namep)
		{
			name = new char[strlen(namep) + 1 ];
			strcpy_s(name, strlen(namep) + 1, namep);
		}
		else
		{
			name = NULL;
		}
		score = sco;
		cout << "���ù��캯��" << endl;

	}
	~student()
	{
		if (name)
		{
			delete[]name;
		}
		cout << "������������";
	}
	void show()
	{
		cout << num << '\t' << name << '\t' << score << endl;
	}
};