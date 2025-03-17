//Page 43:6
#include <iostream>
using namespace std;

class ListClass
{
    char *ListPtr;
    int nLen;  //��̬����������С
    int nElem; //�������ѱ�������ݸ���
public:
    ListClass(int n = 10);
    ~ListClass();
    int Elem(char);
    char &Elem(unsigned n);
    int Elem();
    int Len();
    char GetElem(int);
    void Print();
};

ListClass::ListClass(int n)
    : nLen(0), nElem(0), ListPtr(0)
{
    if (n > 0)
    {
        nLen = n;
        ListPtr = new char[nLen];
    }
}
ListClass::~ListClass()
{
    if (ListPtr)
    {
        delete[] ListPtr;
    }
    ListPtr = 0;
    nLen = 0;
    nElem = 0;
}
//��β׷��һ�����ݣ�����Ԫ�ظ���
int ListClass::Elem(char c)
{
    if (nLen == nElem)
    {
        char *newPtr = new char[nLen + 10];
        if (nLen) //or::if(ListPtr)
        {
            for (int i = 0; i < nElem; i++)
            {
                newPtr[i] = ListPtr[i];
            }
            delete[] ListPtr;
        }
        ListPtr = newPtr;
        nLen += 10;
    }
    ListPtr[nElem++] = c;
    return nElem;
}

//����Ԫ�����ã����ô˺�����Ҫ�ⲿ��Խ����
char &ListClass::Elem(unsigned n)
{
    return *(ListPtr + n);
}
//�������ݸ���
int ListClass::Elem()
{
    return nElem;
}

//���������С
int ListClass::Len()
{
    return nLen;
}

//���Ԫ��
char ListClass::GetElem(int i)
{
    return *(ListPtr + i);
}

void ListClass::Print()
{
    for (int i = 0; i < nElem; i++)
    {
        cout << ListPtr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    ListClass list(6);
    for (int i = 0; i < 5; i++)
    {
        list.Elem((char)(65 + i));
    }
    cout << "list length: " << list.Len() << endl;
    cout << "list element count: " << list.Elem() << endl;
    list.Print();
    list.Elem(3u) = 'E';
    cout << "list element at 3: " << list.Elem(3u) << endl;
    //
    list.Elem('F');
    list.Elem('G');
    cout << "list length: " << list.Len() << endl;
    list.Print();
    cout << "last element: " << list.GetElem(list.Elem() - 1) << endl;
}