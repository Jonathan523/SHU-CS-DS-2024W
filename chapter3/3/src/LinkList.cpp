#include"LinkList.hpp"

template<typename T>
LinkList<T>::~LinkList()
{
	Node<T>* p = head;
	while (p != NULL)
	{
		head = head->next;
		delete p;
		p = head;
	}
	length = 0;

}

template<typename T>
void LinkList<T>::append(T a)
{
	if (head == NULL)
	{
		head = new Node<T>(a);
		length++;
	}
	else
	{
		Node<T>* p = head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		Node<T>* q = new Node<T>(a);
		p->next = q;
		length++;
	}

}

template<typename T>
std::ostream& operator<<(std::ostream& os, const LinkList<T>& List)
{
	Node<T>* p = List.head;
	while (p != NULL)
	{
		os << p->data << "->";
		p = p->next;
	}
	os << "NULL";
	return os;

}

template<typename T>
void reverse(LinkList<T>& List)
{
	if (List.length == 0 || List.length == 1)
		{
            return;
        }
	else if (List.length == 2)
	{
		List.head->next->next = List.head;
		List.head = List.head->next;
		List.head->next->next = NULL;
	}
	else
	{
		Node<T>* pre = NULL, * cur = List.head, * next = List.head->next;
		while (next != NULL)
		{
			cur->next = pre;
			pre = cur;
			cur = next;
			next = next->next;

		}
		cur->next = pre;
		List.head = cur;
	}
}

