#include <iostream>
using namespace std;
class Time
{
    int hour;
    int minute;
    int second;
    static int baseHour;
    static int baseMinute;
    static int baseSecond;

    static int timeToSecond(Time t);

public:
    Time(int = 0, int = 0, int = 0);
    static int timeBaseDiffence(Time t);
    void show();

    friend int diffence(Time t1, Time t2);
};

int Time::baseHour = 1;
int Time::baseMinute = 10;
int Time::baseSecond = 10;

int Time::timeToSecond(Time t)
{
    return (t.hour * 3600 + t.minute * 60 + t.second);
}

Time::Time(int h, int m, int s) //ע�⣺Ĭ��ֵ��ԭ��˵��������ʱ������дĬ��ֵ
    : hour(h), minute(m), second(s)
{
}

int Time::timeBaseDiffence(Time t)
{
    //����1:����һ�����ڻ�׼ʱ��Ķ����ٵ���timeToSecond�������������
    Time tmp(baseHour, baseMinute, baseSecond);
    return timeToSecond(t) - timeToSecond(tmp);

    //����2������1���Ժϲ���������ź��ʽ��Ӧ������ʽ���ù��캯��������ʱ����ķ���
    //    return timeToSecond(t) - timeToSecond(Time(baseHour, baseMinute, baseSecond));
}
void Time::show()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

//������ͨ������������Ϊ��Time����Ԫ
int diffence(Time t1, Time t2)
{
    return t1.timeToSecond(t1) - t2.timeToSecond(t2);
    //or:
    //return Time::timeToSecond(t1) - Time::timeToSecond(t2);
}

int main()
{
    Time t1(1, 11, 2), t2(1, 12, 50);
    cout << "t1: ";
    t1.show();
    cout << "t2: ";
    t2.show();
    cout << "t1 diff to basetime: " << Time::timeBaseDiffence(t1) << endl;
    cout << "t2 diff to basetime: " << Time::timeBaseDiffence(t2) << endl;
    cout << "t1 diff to t2: " << diffence(t1, t2) << endl;
}