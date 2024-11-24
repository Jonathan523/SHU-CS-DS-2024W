#pragma once
#include<iostream>
#include <cstddef>
template<typename T>
class SequenceList
{
private:
	T* data;
	int length;
	const int Maxlength; 
public:
	SequenceList() :data(NULL), length(0),Maxlength(5) {}
	SequenceList(int size=0, T* array = NULL);
	SequenceList(const SequenceList<T>& other);
	~SequenceList();

	T& operator[](int index);
	int size() const;
	template<typename T1>
	friend std::ostream& operator<<(std::ostream& os, const SequenceList<T1>& List);

};