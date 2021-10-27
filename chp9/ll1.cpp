#include <iostream>
using namespace std;

struct Node{
  int num;
  struct Node* next;
};



int main()
{

	Node *new_node, *head, *ptr;

	new_node = new Node;
	new_node->num = 10;
 	new_node->next = nullptr;

	head = new_node;

	// creating 2nd node.
	new_node = new Node;
	new_node->num = 20;
	new_node->next = nullptr;

	head->next = new_node;

	cout << "First node's value" << head->num << endl;
	cout << "Second node's value" << head->next->num << endl;


	// Creating 3rd node
	new_node = new Node ;
	new_node->num = 30;
	new_node->next = nullptr;

	ptr = head ;
	while( ptr->next != nullptr)
	{
		ptr = ptr->next;
		
	}
	ptr->next = new_node;

	int i=1;
	ptr = head ;
	while( ptr != nullptr)
	{
		cout << i++ << " node's value " << ptr->num << endl; 
		ptr = ptr->next;
	}	
}