#pragma once
class stack
{
public:
	stack(int size);
	void initialize_Stack();
	void push(int value);
	void pop();
	bool isEmpty();
	bool isFull();
	int Top();
	void display();
	~stack();
private:
	int top;
	int maxSize;
	int* list;
};

