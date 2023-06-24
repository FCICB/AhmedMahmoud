#include "stack.h"
#include <iostream>
#include <cassert>
using namespace std;

stack::stack(int size)
{
	if (size < 0)
	{
		cout << "sorry,must be positive";
		maxSize = 100;
	}
	else
		maxSize = size;
	top = 0;
	list = new int[maxSize];
	
}

void stack::initialize_Stack()
{
	top = 0;
}

void stack::push(int value)
{
	if (!isFull()) {
		list[top] = value;
		top++;
	}
	else
		cout << "sorry,list is full" << endl;
}

void stack::pop()
{
	if (isEmpty())
		cout << "sorry,list is empty" << endl;
	else
	{
		top --;
	}
}
bool stack::isEmpty()
{
	return top == 0;
}
bool stack::isFull()
{
	return top == maxSize;
}

int stack::Top()
{
	assert(top != 0);
	return list[top-1];
}

void stack::display()
{
	for (int i = top - 1;i >= 0;i--)	
	{
		cout << list[i] << " ";
	}
	cout << endl;
}


stack::~stack()
{
	delete[]list; ////deallocate the memory
}
