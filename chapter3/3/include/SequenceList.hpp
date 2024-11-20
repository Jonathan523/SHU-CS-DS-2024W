#pragma once
#include<iostream>
#include <cstddef>
template<typename T>
class SequenceList
{
private:
	T* data;
	int length;
public:
	SequenceList() :data(NULL), length(0) {}
	SequenceList(int size, T* array = NULL);
	~SequenceList();

	T& operator[](int index);
	int size() const;
	template<typename T1>
	friend std::ostream& operator<<(std::ostream& os, const SequenceList<T1>& List);
};