#include "Queue.h"
#include <iostream>
using namespace std;

Node::Node()
{
	info = 0;
	next = nullptr;
}
Queue::Queue()
{
	rear = nullptr;
	front = nullptr;
}

void Queue::initializeQueue()
{
	Node* temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isEmpty()
{
	return rear == nullptr;
}

bool Queue::isFull()
{
	return false;
}

void Queue::Enqueue(int value)
{
	Node* newNode = new Node();
	newNode->info = value;
	if (isEmpty())
	{
		front = rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;

	}
}

void Queue::Dequeue()
{
	Node* temp;
	if (!isEmpty()) {
		temp = front;
		front = front->next;
		delete temp;
		if (front == rear) //One Node
			rear = NULL;
	}
	else
	{
		cout << "sorry , cannot delete it";
	}

}

void Queue::display()
{
	Node* temp = front;
	while (temp != NULL)
	{
		cout << temp->info << " ";
		temp = temp->next;
	}
	cout << endl;
}

int Queue::count()
{
	int count = 0;
	Node* temp = front;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count;
}

bool Queue::search(int value)
{
	Node* temp = front;
	bool found = false;
	while (temp != NULL)
	{
		if (temp->info == value)
			found = true;
		temp = temp->next;
	}
	return found;
}
int Queue::getFront()
{
	return front->info;
}

int Queue::getRear()
{
	return rear->info;
}




