#pragma once
#include <cstddef>
#include <iostream>

template <typename T>
class LinkList;

template <typename T>
class Node
{
private:
    T data;
    Node<T>* next;

public:
    Node() : next(NULL) {}
    Node(T data) : data(data), next(NULL) {}
    friend class LinkList<T>;

    template <typename T0>
    friend std::ostream& operator<<(std::ostream& os, const LinkList<T0>& List);

    template <typename T0>
    friend void reverse(LinkList<T0>& List);
};

template <typename T>
class LinkList
{
private:
    Node<T>* head;
    int length;

public:
    LinkList() : head(NULL), length(0) {}
    LinkList(const LinkList<T>& other);
    ~LinkList();
    void insert(T a);
    void append(T a);
    void clear();
    template <typename T0>
    friend std::ostream& operator<<(std::ostream& os, const LinkList<T0>& List);

    template <typename T0>
    friend void reverse(LinkList<T0>& List);
};