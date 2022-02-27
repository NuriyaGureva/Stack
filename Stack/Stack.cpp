// Stack.cpp : 
#include <iostream>
using namespace std;
#include<stack>
#define tab "\t"

class Stack 
{
	struct Element
	{
		int Data;
		Element* pNext;
	public:
	Element(int Data, Element* pNext = nullptr) : Data(Data), pNext(pNext){}
		~Element()	{}

	}*Head;
public:
	unsigned int size;

	Stack()
	{
		Head == nullptr;
		
	}
	~Stack() {}

	void push(int Data)
	{
		Head = new Element(Data, Head);
		size++;
		
	}
	void pop()
	{
		if (Head == nullptr)return;		
		Element* top = Head;		
		Head = Head->pNext;	
		delete top;
		size--;
	}

	bool empty()
	{
		return Head == nullptr;
	}	
	void print()const
	{
		Element* Temp = Head;
		while (Temp!=nullptr)
		{
         cout<< Temp << tab << Temp->Data << tab << Temp->pNext << endl;
		 Temp = Temp->pNext;
		}
	}
	
};

int main()
{
	setlocale(LC_ALL, "");
	int n;
	Stack s;
	s.push(12);
    s.push(10);	
	for (int i =1; i <5; i++)
		s.push(i);
	cout << "Pазмер очереди\t" << s.size << tab <<endl;
	cout << endl;
	s.print();

	while (!s.empty())
	{	
		s.pop();
	}

	
}

