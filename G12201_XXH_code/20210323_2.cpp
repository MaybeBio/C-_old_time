#include <iostream>
using namespace std;

class Date
{
protected:
    int year, month, day;

public:
    void setYMD(int, int, int);
    void getYMD(int *, int *, int *);
    void getYMD(int &, int &, int &);
    bool leapYear();
    void increaseDay();
};
void Date::setYMD(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void Date::getYMD(int *pyear, int *pmonth, int *pday)
{
    *pyear = year;
    *pmonth = month;
    *pday = day;
}
void Date::getYMD(int &y, int &m, int &d)
{
    y = year;
    m = month;
    d = day;
}
bool Date::leapYear()
{
    return (!(year % 400) || (year % 100) && !(year % 4));
}
void Date::increaseDay()
{
    int ModOfMonths = 13; //�·ݵ�ģ�����������·ݵ�����ֵ��
    int ModOfDays = 32;   //������ģ��������������������ֵ��
    //���·ݸ���
    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        ModOfDays = 31;
        break;
    case 2:
        ModOfDays = leapYear() ? 30 : 29;
    }

    day += 1;
    //��λ������
    int dm = day / ModOfDays;
    //�µ���
    day = dm + day % ModOfDays;
    //
    month += dm;
    int dy = month / ModOfMonths;
    month = dy + month % ModOfMonths;
    //
    year += dy;
}

//һ�㺯���������������������,��Ҫ����Ķ��󴫵ݸ�����
//������Date���͵����ã���int��double����һ��
void print(Date &date)
{
    int y, m, d;
    //�������ֵ
    date.getYMD(y, m, d);
    cout << y << "." << m << "." << d << endl;
}

int main()
{
    int year, month, day;
    cout << "input year month and day:";
    cin >> year >> month >> day;

    Date date;
    date.setYMD(year, month, day);
    print(date);
    date.increaseDay();
    cout << "after increase one day, the date is: ";
    print(date);
}
