#include "SequenceList.hpp" 
template <typename T>
SequenceList<T>::SequenceList(int size, T* array) : length(size),maxlength(size+5)
{
    data = new T[size+5];   
    if (array != NULL) {
        for (int i = 0; i < size; i++) {
            data[i] = array[i];
        }
    }
}

template <typename T>
SequenceList<T>::~SequenceList()
{
    if (data != NULL) {
        delete[] data;
    }
}



template <typename T>
int SequenceList<T>::size() const
{
    return length;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const SequenceList<T>& List)
{
    os << '(';
    for (int i = 0; i < List.size() - 1; i++) {
        os << List.data[i] << ',';
    }
    os << List.data[List.size() - 1] << ')';
    return os;
}

template <typename T>
void reverse(SequenceList<T>& List)
{
    int n = List.size();
    for (int i = 0; i < n / 2; i++) {
        T temp = List[n - 1 - i];
        List[n - 1 - i] = List[i];
        List[i] = temp;
    }
}