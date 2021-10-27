#include <iostream>
using namespace std;

struct Node{
  int num;
  struct Node* next;
};


int main()
{
	Node *new_node, *head, *ptr, *prev;

	head = nullptr;

	for(int i=0; i<5;i++)
	{
		new_node = new Node;
		cout << "Enter your num : " ;
		cin >> new_node->num;
		new_node->next = nullptr;

		if ( head == nullptr)
		{
			head = new_node;
		}
		else
		{
			prev = nullptr;
			ptr = head ;
			while( ptr != nullptr)
			{
				if( new_node->num < ptr->num)
					 break;
				else
				{
					prev = ptr;
					ptr = ptr->next;
				}
			}

			if ( prev == nullptr) // 
			{
				// new_node->next = head;
				// head = new_node;
				head = new_node;
				new_node->next = ptr;
			}
			else
			{
				new_node->next = prev->next;
				prev->next = new_node;
			}
		}
	}
    
    ptr = head;
    int i = 1;
	while(ptr != nullptr)
    {
		cout << i++ << " node's value " << ptr->num << endl;
		ptr = ptr->next;
    }
}