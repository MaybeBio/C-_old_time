#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	char infilename[40], outfilename[40], ch;
	cout << "������һ���ļ���";
	cin >> infilename;
	fstream infile(infilename, ios::in|ios::binary);
	if (!infile)
	{
		cout << "�򲻿������ļ�" << infilename << endl;
		exit(1);
	}
	cout << "������һ������ļ�";
	cin >> outfilename;
	fstream outfile(outfilename, ios::out | ios::binary);
	if (!outfile)
	{
		cout << "�򲻿�����ļ�" << outfilename << endl;
		exit(2);
	}
	while (infile.get(ch))
	{
		outfile << ch;
		infile.close();
		outfile.close();
		return 0;

	}
}







