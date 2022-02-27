// Stack.cpp : 
#include <iostream>
using namespace std;
#include<stack>
#define tab "\t"

class Stack 
{
	struct Node
	{
		int Data;
		Node* pNext;
	public:
		Node(int Data, Node* pNext = nullptr) : Data(Data), pNext(pNext){}
		~Node()	{}

	}*Head;
	unsigned int size;
public:

	Stack()
	{
		Head == nullptr;
		
	}
	~Stack() {}

	void push(int Data)
	{
		Head = new Node(Data, Head);
		/*Node* Temp = new Node(Data);
		Temp->pNext = Head;
		Head = Temp;*/
		size++;
		
	}
	void pop()
	{
		if (Head == nullptr)return;		
		Node* top = Head;		
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
		Node* Temp = Head;
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
	stack<int> s;
	s.push(12);
    s.push(10);	
	for (int i =1; i <5; i++)
		s.push(i);
	cout << "Pазмер очереди\t" << s.size() << tab <<endl;
	
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}	
	

}

