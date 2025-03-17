#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct node
{
    int data;
    node *next;
};

//ʵ�ʾ�����ͷ֮ǰ���ӽڵ�
node *push(node *head, int d)
{
    node *p = new node;
    p->data = d;
    p->next = head;
    return p;
}

//ʵ�ʾ���ͷ�����ɲ���d��������ɾ��ͷ
node *pop(node *head, int &d)
{
    if (head)
    {
        d = head->data;
        node *p = head;
        head = head->next;
        delete p;
    }
    return head;
}

int getFirst(node *head)
{
    if (head)
    {
        return head->data;
    }
    return 0xFFFFFFFF; //��ʾ�����ݣ��Լ�����
}

void display(node *head)
{
    while (head)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

void freeStack(node *head)
{
    while (head)
    {
        node *p = head;
        head = head->next;
        delete p;
    }
}

int main()
{
    srand(time(0));

    node *pstack = 0;
    for (int i = 0; i < 5; i++)
        pstack = push(pstack, rand() % 100);

    display(pstack);
    cout << endl;

    int d = 0;
    pstack = pop(pstack, d);
    cout << "U pop: " << d << endl;
    display(pstack);
    cout << endl;

    d = getFirst(pstack);
    cout << "first data: " << d << endl;
    display(pstack);
    cout << endl;

    freeStack(pstack);
}
