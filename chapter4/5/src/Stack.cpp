#include"Stack.hpp"
#include<iostream>

Stack::Stack(const int& size) :top(-1), MaxSize(size)
{
	data = new int[MaxSize];
}

void Stack::push(int a)
{
	if (top < MaxSize - 1)
	{
		data[++top] = a;
	}
	else
	{
		std::cout << "栈已满，入栈失败"<<std::endl;
	}

}

int Stack::pop()
{
	if (top>-1)
	{
		return data[top--];
	}
	else
	{
		throw std::out_of_range("栈已空，出栈失败");
	}

}

bool Stack::IsEmpty()
{
	return top == -1;

}

