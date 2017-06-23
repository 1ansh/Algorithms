#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node *newNode(int key)
{
    Node *temp = new Node;
    temp-> data= key;
    temp->next = NULL;
    return temp;
}

bool findList(Node* a,Node* b)
{
    if (a == NULL && b == NULL)
    	return true;
 
    if ( a == NULL ||
        (a != NULL && b == NULL))
        return false;
	Node* temp;
	while(b!=NULL)
	{
		temp=a;
		if(b->data==temp->data)
		{
			while(a!=NULL && b->data==temp->data)
			{
				b=b->next;
				temp=temp->next;
				if(temp==NULL)
				{
					return true;
				}
			}
		}
		else
		{
			b=b->next;
		}
	}
	return false;
}




int main()
{
    /* Let us create two linked lists to test
    the above functions. Created lists shall be
        a: 1->2->3->4
        b: 1->2->1->2->3->4*/
    Node *a = newNode(1);
    a->next = newNode(2);
    a->next->next = newNode(3);
    a->next->next->next = newNode(4);
 
    Node *b = newNode(1);
    b->next = newNode(2);
    b->next->next = newNode(1);
    b->next->next->next = newNode(2);
    b->next->next->next->next = newNode(3);
    b->next->next->next->next->next = newNode(4);
 
    findList(a,b) ? cout << "LIST FOUND" :
                    cout << "LIST NOT FOUND";
 
    return 0;
}
