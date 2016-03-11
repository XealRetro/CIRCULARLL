#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>

class CircularLinkedList
{
public:

	CircularLinkedList();
	~CircularLinkedList();
	void createList(int numData);
	void addListStart(int numData);
	void addToList(int numData, int location);
	void deleteItem(int numData);
	void searchList(int numData);
	void displayList();

private:
	struct node
	{
		int data;
		node* next;
	};
	typedef struct node* nodePtr;	//writing nodePtr is the same as using node*

	nodePtr head;
	nodePtr curr;
	nodePtr temp;
	nodePtr last;
};

CircularLinkedList::CircularLinkedList()
{
}

CircularLinkedList::~CircularLinkedList()
{
}