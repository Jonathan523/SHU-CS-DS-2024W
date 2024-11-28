#pragma once
#include<iostream>
#include<cstdlib>

class Stack
{
	int top1, top2;
	int maxsize;
	int* array;
public:
	Stack(int max) :maxsize(max), top1(-1), top2(max)
	{
		array = new int[max];
	}
	~Stack() {
		delete[] array;
	}
	void push1(int value)
	{
		if (top1 < top2+1)array[++top1] = value;
		else {
			std::cout << "Stack Overflow" << std::endl;
			exit(1);
		}
	}
	void push2(int value)
	{
		if (top2 > top1+1)array[--top2] = value;
		else {
			std::cout << "Stack Overflow" << std::endl;
			exit(1);
		}
	}
	void pop1() {
		if (top1 >= 0) {
			std::cout<< array[top1--]<<std::endl;
		}
		else {
			std::cout << "Stack Underflow" << std::endl;
			exit(1 );
		}
	}
	void pop2() {
		if (top2 < maxsize) {
			std::cout<< array[top2++] << std::endl;
		}
		else {
			std::cout << "Stack Underflow" << std::endl;
			exit(1);
		}
	}
	bool isEmpty1()const {
		return top1 == -1;
	}
	bool isEmpty2()const {
		return top2 == maxsize;
	}
};

