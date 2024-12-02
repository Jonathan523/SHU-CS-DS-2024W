#pragma once
#include <cstddef>
#include <iostream>
template <typename T>
class SequenceList
{
private:
    T* data;
    int length;
    const int Maxlength;

public:
    SequenceList();
    SequenceList(int size, T* array = NULL);
    SequenceList(const SequenceList<T>& other);
    ~SequenceList();

    T& operator[](int index);
    int size() const;
    template <typename T1>
    friend std::ostream& operator<<(std::ostream& os,
                                    const SequenceList<T1>& List);
};