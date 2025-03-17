#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct student
{
    char num[10];
    char name[10];
    int age;
    int score;
    student *next;
};

student *insert(student *head, student *p)
{
    student *pPre = 0, *piter = head;
    while (piter && strcmp(piter->num, p->num) <= 0)
    {
        pPre = piter;
        piter = piter->next;
    }
    p->next = piter;
    if (pPre)
    {
        pPre->next = p;
    }
    else
    {
        head = p;
    }
    return head;
}

//����ʱ����һ�м�¼��һ�м�¼����ʽ����,�磺
//1010 Tom 8 90
//1003 Jerry 6 90
//1011 Jhon 9 89
//-1

student *
create()
{
    student *head = 0;
    char buf[10];
    cin >> buf; //������ѧ�ţ�������buf��
    while (strcmp(buf, "-1"))
    {
        student *p = new student;
        strcpy(p->num, buf);
        cin >> p->name >> p->age >> p->score;
        p->next = 0; //��һ������Ҫ��
        head = insert(head, p);
        //�ٴ�����ѧ�ſ�ʼ
        cin >> buf;
    }
    return head;
}

void print(student *head)
{
    while (head)
    {
        cout << setw(10) << head->num << setw(10) << head->name << setw(5) << head->age << setw(5) << head->score << endl;
        head = head->next;
    }
}

void delChain(student *head)
{
    while (head)
    {
        student *p = head;
        head = head->next;
        delete p;
    }
}

int main()
{
    student *head = 0;

    head = create();
    print(head);
    delChain(head);
}