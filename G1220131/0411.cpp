#include<iostream>
using namespace std;
int main()
{
	int m, n,i,j;
	cout << "������m" << endl;
	cin >> m;
	while(m<2)
	{
		cout << "m������ڵ���2��"<<'\n'<<"����������\n";
		cin >> m;
	}
	cout << "������n" << endl;
	cin >> n;
	while (n < 2)
	{
		cout << "n������ڵ���2��" << '\n' << "����������\n";
		cin >> n;
	}
	for (i = 0; i < n; i++)
	{
		printf("*");
	}		
	printf("\n");
	for (j= 0; j <(m - 2); j++)
	{
		printf("*");
		for (i = 0; i < n - 2; i++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	system("pause");
}