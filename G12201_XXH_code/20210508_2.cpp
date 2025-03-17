#include <iostream>
using namespace std;

class List;
class Node
{
    int data;
    Node *next;
    friend class List;
};

class List
{
private:
    Node *head;

public:
    List();
    List(int d);
    ~List();
    void print();
    void append(int d = 0);
};

List::List()
    : head(0)
{
    cout << "constructor (no parameter)" << endl;
}

List::List(int d)
{
    head = new Node;
    head->data = d;
    head->next = 0;

    cout << "constructor (with one parameter)" << endl;
}

List::~List()
{
    while (head)
    {
        Node *p = head;
        head = head->next;
        delete p;
    }
    //ѭ��������head��ֵΪ0
    cout << "destructor!" << endl;
}

void List::print()
{
    Node *piter = head;
    while (piter)
    {
        cout << piter->data << "  ";
        piter = piter->next;
    }
    cout << endl;
}

void List::append(int d)
{
    //�½��
    Node *pnew = new Node;
    pnew->data = d;
    pnew->next = 0;

    //����һ��
    //��ӵ�����β��
    if (0 != head)
    {
        //��β�ӵ�
        Node *piter = head;
        while (0 != piter->next)
        {
            piter = piter->next;
        }
        piter->next = pnew;
    }
    else
    {
        //����Ϊ�����������ӵĽڵ����ͷ���Ҳ��β�ڵ�
        head = pnew;
    }

    //��������
    /*  
    Node *piter = head;
    while (0 != piter && 0 != piter->next)
    {
        piter = piter->next;
    }
    if (0 != piter)
    {
        piter->next = pnew;
    }
    else
    {
        head = pnew;
    }
    */
}

int main()
{
    cout << "objector list1:" << endl;
    List list1;
    list1.append(1);
    list1.append(2);
    list1.print();
    list1.~List(); //��ʽ�������������������������������ʱ�����Զ�����һ��list1����������

    //list1������Ȼ���ڣ����¿���֤��
    list1.append(10);
    list1.append(20);
    list1.print();

    //
    cout << "\nobjector list2:" << endl;
    List list2(30);
    list2.append(1);
    list2.append(2);
    list2.print();
}
