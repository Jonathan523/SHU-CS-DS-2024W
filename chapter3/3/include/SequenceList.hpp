#pragma once
#include<iostream>
#include <cstddef>
template<typename T>
class SequenceList
{
private:
	T* data;
	int length;
	const int maxlength; 
public:
	SequenceList() :data(NULL), length(0),maxlength(5) {}
	SequenceList(int size=0, T* array = NULL);
	~SequenceList();

	int size() const;
	template<typename T1>
	friend std::ostream& operator<<(std::ostream& os, const SequenceList<T1>& List);
};