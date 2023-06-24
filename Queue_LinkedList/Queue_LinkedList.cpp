// Queue_LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
	Queue q;
	cout << "Enter Three Items to Enqueue \n";
	for (int i = 1; i <= 3; i++)
	{
		int item;
		cin >> item;
		q.Enqueue(item);
	}
	q.display();
	q.Dequeue();
	cout << "After deque \n";
	q.display();
	cout << "Get Front \n";
	cout << q.getFront()<<endl;
	cout << "Get Rear \n";
	cout << q.getRear()<<endl;
	cout << "Clear All items \n";
	q.initializeQueue();

}

