#include<iostream>
using namespace std;
int main()
{
	/*
	char str1[20], str2[20], str3[20];
	cout << "���������ַ���" << endl;
	cin >> str1;
	cin >> str2;
	cin >> str3;
	cout << "�ַ���1=" << str1 << endl;
	cout << "�ַ���2=" << str2 << endl;
	cout << "�ַ���3=" << str3 << endl;
	*/

	char s1[] = "how you";
	char s2[] = "howyou";
	char s3[20];
	cin>>s3;
	cout << strlen(s1) << strlen(s2)<<endl;
	cout << strlen(s3);
	return 0;
}