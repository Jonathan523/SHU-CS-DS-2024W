#pragma once
#include"Stack.hpp"  

class Queue
{
private:
	Stack EntryStack;
	Stack ExitStack;
	const int MaxSize;
public:
	Queue(const int& size = 20);
	void push(int a);
	int pop();
	bool IsEmpty();

};

