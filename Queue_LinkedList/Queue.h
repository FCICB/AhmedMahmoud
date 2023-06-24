#pragma once
class Node
{
public:
	int info;
	Node* next;
	Node();
};
class Queue
{
	Node* front;
	Node* rear;
public:
	Queue();
	void initializeQueue();
	bool isEmpty();
	bool isFull();
	void Enqueue(int value);
	void Dequeue();
	void display();
	int count();
	bool search(int value);
	int getFront();
	int getRear();
};

