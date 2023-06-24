// Stack_linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
	int value;
	stack s;
	cout << "Push Three Elements: \n";
	for (int i = 0; i < 3; i++)
	{
		cin >> value;
		s.push(value);
	}
	cout << "After pop 2 elments from stack :\n";
	s.pop();
	s.pop();
	s.display();
	cout << "Enter value to search for \n";
	cin >> value;
	if (s.search(value))
		cout << "Is Found\n";
	else
		cout << "Not Found";
	
}
