#pragma once
using namespace std;
#include<iostream>
class date
{
	int year, month, day;
public:
	date(int y = 2022, int m = 8, int d = 28)
	{
		year = y;
		month = m;
		day = d;
		cout << "���ù��캯��";
		showdate();
	}
	void showdate()
	{
		cout << year << '.' << month << '.' << day << endl;
	}
	~date()
	{
		cout << "������������";
		showdate();
	}

};