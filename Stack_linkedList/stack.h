#pragma once
class Node
{
public:
	int info;
	Node* next;
	Node();
};

class stack
{
	Node* Top;
public:
	stack();
	void push(int value);
	void pop();
	int peek();
	bool isEmpty();
	bool isFull();
	void display();
	int count();
	int search(int value);
};

