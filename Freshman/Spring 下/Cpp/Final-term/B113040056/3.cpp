#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
	Node *next = NULL;
	int value;
};

class Stack
{
	public:
	
	void push(int num)
	{
		// make 
		Node *p = new Node;
		
		p->value = num;
		p->next = NULL;
		// no element
		if(headNode == NULL)
		{
			// headnode point to p
			headNode = p;
			tailNode = p;
		}
		
		// tailNode points to p;
		// first save the tailNode
		Node *temp = tailNode;
		
		
		tailNode = p;
		
		// make back point to front
		temp->next = tailNode;

		
	
		
		
	
	}
	void pop()
	{
		// empty
		// sisa 1 
		if(headNode == tailNode)
		{
			headNode = tailNode = NULL;
			cout << "Stack is Empty" << endl;
			return;
		}
		else if (headNode == NULL)
		{
			cout << "Stack is Empty" << endl;
			return;
		}
		
		// make tail to new tail
		//cout << "head node" << headNode->next->value << endl;
		Node *find_tail = headNode;
		
		while(find_tail->next->next != NULL)
		{
			find_tail = find_tail->next;
		}
		
		//free
		
		Node *f = tailNode;
		free(f);
		
		// assign back
		tailNode = find_tail;
		tailNode->next = NULL;
	}
	
	void display()
	{
		if(headNode == NULL)
		{
			return;	
		}
		Node *temp_print = headNode;
		cout << "In stack ";
		while(temp_print != tailNode)
		{
			cout << temp_print->value << " ";
			temp_print = temp_print->next; 
		}
		if(temp_print != NULL)
		{

			cout << temp_print->value << endl;
		}
		
		cout << endl;
	}
	
	//Node * getTail() {return tailNode;}
	
	private:
	Node *headNode = NULL;
	Node *tailNode = NULL;
};


int main(void)
{
	Stack q3;
	
	cout << "Stack operations" << endl;
	
	int mode;
	int n;
	while(true)
	{
		cout << "Select an option to enter:" << endl;
		cout << "1. Push an element into stack. " << endl;
		cout << "2. Pop out an element from stack. " << endl;
		cout << "3. Exit." << endl;
		
		cout << "Enter an option ";
		cin  >> mode;
		
		switch(mode)
		{
			case 1:
				cout << "Enter a number " << endl;
				cin >> n;
				
				q3.push(n);
				q3.display();
				break;
				
			case 2:
				q3.pop();
				q3.display();
				break;
			
			case 3:
				exit(0);
				break;
				
			default:
				cout << "Wrong input" << endl;
				
		}
	}

	return 0;
}
