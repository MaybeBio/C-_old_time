#include <iostream>
using namespace std;

//��ӹ��캯������
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

public:
    Date();
    Date(int);
    Date(int, int);
    Date(int, int, int);
    Date(Date &);
};

//�б��ʼ������������ȱʡ��ֵ��1970.1.1
Date::Date()
    : year(1970), month(1), day(1)
{
}

Date::Date(int y)
    : year(y), month(1), day(1)
{
}

Date::Date(int y, int m)
    : year(y), month(m), day(1)
{
}

Date::Date(int y, int m, int d)
    : year(y), month(m), day(d)
{
}

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

Date::Date(Date &other)
{
    //��Ա�����ֵ
    year = other.year;
    month = other.month;
    day = other.day;
}
/*
//or���б�ʽ
Date::Date(Date &other)
    : year(other.year), month(other.month), day(other.day)
{
}

//or��ֱ������ǳ����
Date::Date(Date &other)
{
    //û��ָ����Ҫά����ֱ��ʹ��ǳ��������
    *this = other;
}
*/
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
    Date date1; //�����޲������캯��
    print(date1);
    //
    Date date2(2015); //����һ�������Ĺ��캯��
    print(date2);

    Date date3(2015, 2); //�������������Ĺ��캯��
    print(date3);

    Date date4(2015, 2, 28); //�������������Ĺ��캯��
    print(date4);

    date4.increaseDay();
    cout << "date4, after increase one day, the date is: ";
    print(date4);

    Date date5 = date4; //or:Date date5(date4)  or: Date date5{date4}
    print(date5);
}
