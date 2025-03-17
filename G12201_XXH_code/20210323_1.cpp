#include <iostream>
#include <cmath>
using namespace std;

class Line
{
protected:
    int x1, y1, x2, y2;

public:
    void setPoint1(int, int);     //���õ�һ���˵�ֵ
    void setPoint2(int, int);     //���õڶ����˵�ֵ
    void getPoint1(int *, int *); //��õ�һ���˵����꣬��������
    void getPoint2(int &, int &); //��õڶ����˵����꣬��������
    void outputTwoPoint();        //������˵�����ֵ
    double lenth();               //���߶γ��ȣ������˵���룩
};
void Line::setPoint1(int x, int y)
{
    x1 = x;
    y1 = y;
}
void Line::setPoint2(int x, int y)
{
    x2 = x;
    y2 = y;
}
void Line::getPoint1(int *px, int *py)
{
    *px = x1;
    *py = y1;
}
void Line::getPoint2(int &x, int &y)
{
    x = x2;
    y = y2;
}
void Line::outputTwoPoint()
{
    cout << "(" << x1 << "," << y1 << ")  (" << x2 << "," << y2 << ")\n";
}
double Line::lenth()
{
    double dx = x1 - x2;
    double dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    int x, y;
    Line line;
    cout << "input two data for one end-point of line: ";
    cin >> x >> y;
    line.setPoint1(x, y);
    cout << "input two data for another end-point of line: ";
    cin >> x >> y;
    line.setPoint2(x, y);
    cout << "two end-points are: ";
    line.outputTwoPoint();
    //
    line.getPoint1(&x, &y);
    cout << "one end-point of line is: (" << x << "," << y << ")\n";
    line.getPoint2(x, y);
    cout << "another end-point of line is: (" << x << "," << y << ")\n";
    //
    cout << "line lenth is: " << line.lenth() << endl;
}