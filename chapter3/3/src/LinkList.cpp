#include "LinkList.hpp"

template <typename T>
LinkList<T>::LinkList(const LinkList<T>& other) : head(NULL), length(0)
{
    Node<T>* p = other.head;
    while (p != NULL) {
        append(p->data);
        p = p->next;
    }
}

template <typename T>
LinkList<T>::~LinkList()
{
    Node<T>* p = head;
    while (p != NULL) {
        head = head->next;
        delete p;
        p = head;
    }
    length = 0;
}

template <typename T>
void LinkList<T>::insert(T a)
{
    if (head == NULL) {
        head = new Node<T>(a);
        length++;
    } else {
        Node<T>* p = new Node<T>(a);
        p->next = head;
        head = p;
        length++;
    }
}

template <typename T>
void LinkList<T>::append(T a)
{
    if (head == NULL) {
        head = new Node<T>(a);
        length++;
    } else {
        Node<T>* p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        Node<T>* q = new Node<T>(a);
        p->next = q;
        length++;
    }
}

template <typename T>
void LinkList<T>::clear()
{
    Node<T>* p = head;
    while (head != NULL) {
        head = head->next;
        delete p;
        p = head;
    }
    length = 0;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const LinkList<T>& List)
{
    Node<T>* p = List.head;
    while (p != NULL) {
        os << p->data << "->";
        p = p->next;
    }
    os << "NULL";
    return os;
}

template <typename T>
void reverse(LinkList<T>& List)
{
    if (List.length == 0 || List.length == 1) {
        return;
    } else {
        Node<T>* p = NULL;
        Node<T>* q = List.head;
        Node<T>* r = List.head->next;
        while (r != NULL) {
            q->next = p;
            p = q;
            q = r;
            r = r->next;
        }
        q->next = p;
        List.head = q;
    }
}
