#define MIN2(x,y) ((x<y)?(x):(y))
#define MIN4(w,x,y,z) (MIN2(MIN2(w,x),MIN2(y,z)))
#include<iostream>
using namespace std;
int main()
{
	int w, x, y, z;
	cout << "�������ĸ�����" << endl;
	cin >> w >> x >> y >> z;
	cout << "�ĸ����е���С��Ϊ" << MIN4(w, x, y, z) << endl;
}