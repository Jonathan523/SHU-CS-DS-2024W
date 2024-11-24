#include "SequenceList.hpp" 

template <typename T>
SequenceList<T>::SequenceList() :length(0),Maxlength(5)
{
    data = new T[Maxlength];   
}

template <typename T>
SequenceList<T>::SequenceList(int size, T* array) : length(size),Maxlength(size+5)
{
    data = new T[size+5];   
    if (array != NULL) {
        for (int i = 0; i < size; i++) {
            data[i] = array[i];
        }
    }
}

template<typename T>
SequenceList<T>::SequenceList(const SequenceList<T>& other):length(other.length),Maxlength(other.Maxlength)
{
	data = new T[Maxlength];
	for (int i = 0; i < length; i++)
	{
		data[i] = other.data[i];
	}

}

template <typename T>
SequenceList<T>::~SequenceList()
{
    if (data != NULL) {
        delete[] data;
    }
}


template<typename T>
T& SequenceList<T>::operator[](int index)
{
	if (index < 0 || index >= length)
	{
		throw std::out_of_range("index越界");
	}
	else
	{
		return data[index];
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
	if(List.size()!=0){
		os << List.data[List.size() - 1] ;
	}
	os << ')';
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