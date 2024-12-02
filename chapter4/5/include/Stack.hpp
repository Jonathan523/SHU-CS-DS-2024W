#pragma once

class Stack
{
private:
	int* data;
	int top;
	const int MaxSize;  
public:
	Stack(const int& size=20);
	~Stack();
	void push(int a);
	int pop();
	bool IsEmpty();

	friend class Queue;


};