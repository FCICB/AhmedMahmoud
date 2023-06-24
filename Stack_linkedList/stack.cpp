#include "stack.h"
#include<iostream>
#include <cstddef>
using namespace std;
Node::Node() {
	info = 0;
	next = NULL;
}
stack::stack()
{
	Top = NULL;
}

void stack::push(int value)
{
	Node* newNode = new Node();
	newNode->info = value;
	
	if (isEmpty())
	{
		newNode->next = NULL;
		Top = newNode;
	}
	else
	{
		newNode->next = Top;
		Top = newNode;
	}
}

void stack::pop()
{
	Node* temp = Top;
	Top = Top->next;
	delete temp;
}

int stack::peek()
{
	return Top->info;
}

bool stack::isEmpty()
{
	if (Top == NULL)
		return true;
	else
		return false;

}

bool stack::isFull()
{
	return false;
}

void stack::display()
{
	Node* temp=Top;
	while (temp != NULL)
	{
		cout << temp->info << " ";
		temp = temp->next;
	}
	cout << endl;
}

int stack::count()
{
	int count = 0;
	Node* temp = Top;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

int stack::search(int value)
{
	bool found = false;
	Node* temp = Top;
	while (temp != NULL)
	{
		if (temp->info == value)
			found = true;
		temp = temp->next;
	}
	return found;
}
