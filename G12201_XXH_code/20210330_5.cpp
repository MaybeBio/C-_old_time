#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Student
{
protected:
    char Name[10];
    char *Num;
    int Math;
    int English;
    int Physics;
    int Cpp;

public:
    void setNameNo(char *name, char *no);
    void setScore(int m, int e, int p, int c);
    int total();
    int average();
    void outputInfo();

public:
    Student(char *Name = 0, char *Num = 0,
            int Math = 0, int English = 0, int Physics = 0, int Cpp = 0);
    Student(Student &);
    ~Student();
};
//ע�⣺Ĭ��ֵ������ȱʡֵ��д��ԭ�������ʱ����д
Student::Student(char *Name, char *Num,
                 int Math, int English, int Physics, int Cpp)
{
    this->Name[0] = 0; //������ֵ��ԱName, ��thisָ����Ա�����ǽ�����Ƴ�ͻ��һ�ַ���
    if (Name)          //������ָ�βε�Name
    {
        strcpy(this->Name, Name);
    }
    //
    Student::Num = 0;       //������ָ��ԱNum��������Ƴ�ͻ����һ�ַ���
    if (Num && strlen(Num)) //������ָ�β�Num
    {
        Student::Num = new char[strlen(Num) + 1];
        strcpy(Student::Num, Num);
    }
    //
    this->Math = Math;
    this->English = English;
    this->Physics = Physics;
    this->Cpp = Cpp;
}

Student::Student(Student &other)
    : Math(other.Math), English(other.English), Physics(other.Physics), Cpp(other.Cpp), Num(0)
{
    strcpy(Name, other.Name);
    //
    //Num���ڳ�ʼ���б��г�ʼ��Ϊ0ֵ������ֻ�账����Ҫ��̬�����ڴ�����
    if (other.Num)
    {
        Num = new char[strlen(other.Num) + 1];
        strcpy(Num, other.Num);
    }
}
Student ::~Student()
{
    if (Num)
        delete[] Num;
    Num = 0;
    Name[0] = 0;
    Math = English = Physics = Cpp = 0;
}

void Student::setNameNo(char *name, char *no)
{
    Name[0] = 0; //�ÿմ�
    if (name)
    {
        strcpy(Name, name);
    }

    //��Ա���������ã�˵�������Ѿ����ڣ�Ҳ���Ѿ����ù����캯����������Ҫ��ָ���Ա�����жϺ���������
    //���Ǹ����캯������ָ��ķ�ʽ��֮ͬ��
    if (Num) //������
    {
        delete[] Num;
        Num = 0;
    }
    if (no && strlen(no)) //�ٸ��ݲ�������
    {
        Num = new char[strlen(no) + 1];
        strcpy(Num, no);
    }
}
void Student::setScore(int m, int e, int p, int c)
{
    Math = m;
    English = e;
    Physics = p;
    Cpp = c;
}
int Student::total()
{
    return Math + English + Physics + Cpp;
}
int Student::average()
{
    return total() / 4;
}
void Student::outputInfo()
{
    cout << setw(10) << "Name" << setw(10) << "Num" << setw(10) << "Math" << setw(10) << "English";
    cout << setw(10) << "Physics" << setw(10) << "Cpp" << setw(10) << "Total" << setw(10) << "Average" << endl;
    cout << setw(10) << (Name[0] ? Name : "--"); //�����ж�Name[0]���ж�strlen(Name)Ч��һ������ǰ��Ч�ʸ���
    cout << setw(10) << (Num ? Num : "--");
    cout << setw(10) << Math;
    cout << setw(10) << English;
    cout << setw(10) << Physics;
    cout << setw(10) << Cpp;
    cout << setw(10) << total();
    cout << setw(10) << average();
    cout << endl;
}

int main()
{
    cout << "call default constructor: " << endl;
    Student a;
    a.outputInfo();
    //
    cout << "after set name & num: " << endl;
    a.setNameNo("Tom", "G1220150");
    a.outputInfo();
    //
    cout << "after set score: " << endl;
    a.setScore(80, 85, 90, 95);
    a.outputInfo();
    //
    cout << "call copy-constructor: " << endl;
    Student b(a); //or:Student b = a;  or: Student b{a};
    b.outputInfo();
    //
    cout << "after set new name , num and scores:" << endl;
    b.setNameNo("Jerry", "G1220151");
    b.setScore(90, 93, 96, 99);
    b.outputInfo();
    //
}