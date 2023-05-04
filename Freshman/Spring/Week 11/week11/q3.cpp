#include <iostream>

using namespace std;

// tail -> node -> node -> node <- head
class Stack;
class Node
{
	public:
	
	friend class Stack;
	private:
	Node *next;
	int value;
};

class Stack
{
	public:
	void enqueue(int n);
	int dequeue();
	
	void display();

	private:
	// for stack we only using the headNode
		Node *headNode = NULL;
		Node *tailNode = NULL;
};

void Stack::enqueue(int n)
{
	Node *new_member = new Node;
	
	new_member->value = n;

	// empty queue
	if(headNode == NULL)
	{
		new_member->next = NULL;
		
		headNode = tailNode = new_member;
	}
	else
	{
		// make a temp
		Node *temp_head = headNode;
		
		// make new_member point to the head;		
		headNode->next = new_member;
		
		new_member->next = NULL;
		
		headNode = new_member;
	}

}

int Stack::dequeue()
{

	if(tailNode == NULL)
	{
		//cout << "Stack is empty" << endl;
		
		return 0;
	}
	// one member
	else if(headNode == tailNode)
	{
		int temp_data = tailNode->value; // or headNode->value;
		
		headNode = NULL; // or free (tailNode);
		tailNode = NULL;
	}
	else
	{
		Node *find_head_from_tail = tailNode;
		
		while(find_head_from_tail->next->next != NULL)
		{
			find_head_from_tail = find_head_from_tail->next;
		}
		// after while loop we found a node 
		
		int temp_data = headNode->value;
		Node *temp_buang = headNode;
		// headnode points to find_head_from_tail
		headNode = find_head_from_tail;
		
		headNode->next = NULL;
		
		free(temp_buang);
	}
	return 0;
}

void Stack::display()
{
	Node * temp_pointer = tailNode;
	if(tailNode == NULL)
	{
		cout << "stack is empty" << endl;
	}
	else
	{
		cout << "In stack : ";
		while(temp_pointer != NULL)
		{
			cout << temp_pointer->value << " ";
			temp_pointer = temp_pointer->next;
		}
		cout << endl;
	}
}


int main(void)
{

	Stack s;	
	int ans;
	do
	{	
		
		cout << "1 for push in queue, 2 for pop out from queue, 3 for exit:" << endl;
		cin >> ans;
		
		switch(ans)
		{
			case 1:
			{
				int insert;
				cout << "Enter a number :" << endl;
				cin >> insert;
				
				s.enqueue(insert);
				
			}
				break;
			case 2:
				s.dequeue();
				break;
				
			case 3:
				return 0;
				
			default:
				cout << "Wrong input! " << endl;
				break;
			
		}
		
		s.display();
	}
	while(true);

	return 0;
}
