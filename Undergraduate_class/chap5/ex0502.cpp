//������Сд��ĸת���ɴ�д��ĸ
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char i;
	cout << "�������ַ�";
	cin >> i;
	if (islower(i))
	{
		i -= 32; // ������ i-='a'-'A';
	}
	cout << i << endl;
	return 0;

}