#include "CircularLinkedListDef.h"

void CircularLinkedList::createList(int numData)
{
	node *n;
	node *temp;
	if (head == NULL)
	{
		head = new node;
		head->data = numData;
		head->next = head;
	}
	else
	{
		//Go to the end of the list 
		n = head;
		while (n->next != head)
		{
			n = n->next;
		}

		temp->data = numData;
		temp->next = head;
		n->next = temp;
	}
}

void CircularLinkedList::addListStart(int numData)
{
	node *n;
	node *temp;
	if (head == NULL)
	{
		cout << "Create a list first.\n";
		return;
	}
	//Go to the end of the list
	n = head;
	while (n->next != head)
	{
		n = n->next;
	}

	temp->data = numData;
	temp->next = head;
	n->next = temp;
	head = temp;
}

void CircularLinkedList::addToList(int numData, int location)
{
	if (head == NULL)
	{
		cout << "Create a list first.\n";
		return;
	}
	node *n;
	node *temp;
	n = head;
	for (int i = 0; i < location; i++)
	{
		n = n->next;
	}
	temp->data = numData;
	temp->next = n->next;
	n->next = temp;
}

void CircularLinkedList::searchList(int numData)
{
	node *n;
	int i = 0;
	int pos;
	int check = 0;

	n = head;

	do
	{
		if (n->data == numData)
		{
			pos = i;
			check = 1;
			break;
		}
		i++;
		n = n->next;
	} while (n != NULL);

	if (check == 1)
	{
		cout << "Item: " << numData << " was found! It was found at position " << pos + 1;
	}
	else
	{
		cout << "That item was not found in the list\n";
	}
}

void CircularLinkedList::deleteItem(int numData)
{
	node *temp;
	node *curr;
	temp = head;
	curr = head;
	node *delPtr = NULL;
	if (head == NULL)
	{
		cout << "Create a list first.\n";
		return;
	}

	while (curr != NULL && curr->data != numData)
	{
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL)
	{
		cout << numData << " was not in the list.\n";
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		
		cout << "The value: " << numData << " was deleted.\n";
	}
}
