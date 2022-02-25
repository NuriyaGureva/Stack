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
		
	}
	void pop()
	{
		if (Head == nullptr)return;		
		Node* Temp = Head;		
		Head = Temp->pNext;	
		delete Temp;
		size--;
	}

	bool empty()
	{
		return Head == nullptr;
	}	
	
};

int main()
{
	setlocale(LC_ALL, "");

	stack<int> s;
    //s.push(10);

	for (int i =0; i < 5; i++)
		s.push(i);
	
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}	
	//s.pop();
	

}

