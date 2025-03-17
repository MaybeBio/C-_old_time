//�����װ
#include <iostream>
using namespace std;
class List
{
	struct Node
	{
		int data;
		Node *pnext;
	};
	Node *phead,*ptail;//��β�ڵ�

public:
	List();
	List(List &other);
	~List();

	void push_head(int x);
	void push_back(int x);
	void pop_head(int &ret);
	void pop_back(int &ret);
	void print();
	void remove(int key);
	void insert_before(int key, int x);
	void insert_after(int key, int x);
};

List::List():phead(0),ptail(0)
{
}//�б��ʼ��
List::List(List &other):phead(0),ptail(0)//��������ȫ����ʼ��Ϊ0
{
	Node* piter = other.phead;
	while(piter)
	{
		Node* p = new Node;
		p->data = piter->data;
		p->pnext = 0;
		if(ptail)//�ǿ�����
		{
			ptail->pnext = p;
			ptail = p;
		}
		else//������
		{
			phead = ptail = p;
		}
		piter = piter->pnext;
	}
}
List::~List()
{
	while(phead)//
	{
		Node* p = phead;
		phead = phead->pnext;
		delete p;
	}
	ptail = 0;//�ͷŹ�������ͷβָ�붼��0���жϷ�ֹ�������
}

void List::push_head(int x)//����ͷǰ������һ��
{
	Node* p = new Node;
	p->data = x;
	p->pnext = phead;
	phead = p;
	if(!ptail)//ԭ����Ϊ��
	{ptail = p;}
}
void List::push_back(int x)
{
	Node* p = new Node;
	p->data = x;
	p->pnext = 0;
	if(ptail)
	{
		ptail->pnext = p;
		ptail = p;
	}
	else//������
	{
		phead = ptail = p;
	}
}
void List::pop_head(int &ret)
{
	if(!phead)//������
	{	return;}
	ret = phead->data;
	Node* p = phead;
	phead = phead->pnext;
	delete p;
	if(!phead)//����ֻ��һ���ڵ�
	{ptail = 0;}
}
void List::pop_back(int &ret)
{
	if(!ptail)
	{return;}//������

	ret = ptail->data;
	Node *ppre=0, * piter = phead;//�ҵ�β�ڵ�ǰ��Ľڵ�
	while(piter && /*piter->pnext != 0*/   piter != ptail)//piter=0,ѭ���������ҵ������ԭ����ֻ��һ���ڵ㣬��ִ��ѭ��
	{
		ppre = piter;
		piter = piter->pnext;
	}
	if(ppre)//�ҵ�
	{
		ppre->pnext = 0;
		ptail = ppre;
	}
	else//ԭ����ֻ��һ���ڵ�
	{
		phead = ptail = 0;
	}
	delete piter;
}
void List::print()
{
	Node* piter = phead;
	while(piter)
	{
		cout<<piter->data<<"  ";
		piter = piter->pnext;
	}
	cout<<endl;
}
void List::remove(int key)
{
	Node *ppre=0, *piter = phead;
	while(piter && piter->data != key)
	{
		ppre = piter;
		piter = piter->pnext;
	}
	if(piter)//�ҵ�
	{
		if(ppre)//����ͷ�ڵ�
		{
			ppre->pnext = piter->pnext;
			if(0 == ppre->pnext)//key��β�ڵ㣬��ʱppre���µ�β�ڵ�
				ptail = ppre;
		}
		else//��ͷ�ڵ�
		{
			phead = phead->pnext;
			if(0 == phead)//ֻ��һ���ڵ�
				ptail = 0;
		}
		delete piter;
	}
}
void List::insert_before(int key, int x)
{
	Node *ppre=0, *piter = phead;
	while(piter && piter->data != key)
	{
		ppre = piter;
		piter = piter->pnext;
	}
	if(piter)//�ҵ�
	{
		Node* p = new Node;
		p->data = x;
		p->pnext = piter;//����p��piter
		if(ppre)//����ͷ�ڵ�
		{
			ppre->pnext = p;
		}
		else//��ͷ�ڵ�
		{
			phead = p;
		}
	}
}
void List::insert_after(int key, int x)
{
	Node *piter = phead;
	while(piter && piter->data != key)
	{
		piter = piter->pnext;
	}
	if(piter)//�ҵ�
	{
		Node* p = new Node;
		p->data = x;
		p->pnext = piter->pnext;
		piter->pnext = p;
		if(0 == p->pnext)//if(piter == ptail) ��ԭkey��β�ڵ�
			ptail = p;
	}
}

int main()
{
	int data = 0;

	List a;
	a.push_back(++data);
	a.push_back(++data);
	a.push_head(++data);
	a.push_head(++data);
	a.print();
	//
	a.insert_before(2, ++data);
	cout << "\ninsert before key=2: ";
	a.print();
	//
	a.insert_after(2, ++data);
	cout << "\ninsert after key=2: ";
	a.print();
	//
	a.remove(2);
	cout << "\nremove key=2: ";
	a.print();
	//
	int x;
	a.pop_head(x);
	cout << "\npop_head,first value=" << x << ", now exist: ";
	a.print();
	//
	a.pop_back(x);
	cout << "\npop_back,last value=" << x << ", now exist: ";
	a.print();
}