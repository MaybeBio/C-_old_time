#include<iostream>
using namespace std;
#include"ex1006.h"

date d1(2021, 2, 1);
void fun()
{
	cout << "����fun����" << endl;
	static date d2(2000, 1, 1);
	date d3(2089, 3, 6);
	cout << "�˳�fun����"<<endl;
}


int main()
{
	cout << "����main����" << endl;
	
	date d4(2077, 4, 5);
	static date d5(3099, 7, 8);
	fun();
	fun();
	cout << "�˳�main����" << endl;
	return 0;

}