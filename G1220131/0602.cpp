#define SQUARE(x) (x)*(x)
#include<cmath>
#define DIST(x1,y1,x2,y2) sqrt(SQUARE(x1-x2)+SQUARE(y1-y2))
#include<iostream>
using namespace std;
int main()
{
	double x1, y1, x2, y2;
	cout << "�����ĸ�ֵ���ֱ�Ϊx1,y1,x2,y2" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << DIST(x1, y1, x2, y2) << endl;
}