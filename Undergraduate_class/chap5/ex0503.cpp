
//this cpp is to��֤ȫ�ֱ����Լ��ֲ�������һЩ�ص�
#include<iostream>
using namespace std;
int i = 10;
int main()
{
	int i, j = 5;
	i = 20;
	::i += 4;
	j = ::i + i;
	cout << "::i=" << ::i << endl;
	cout << "i=" << i << endl;
	cout << "j=" << j<< endl;
	return 0;

}