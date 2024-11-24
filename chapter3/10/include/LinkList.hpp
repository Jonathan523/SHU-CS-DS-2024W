// LinkList.hpp
#pragma once

#include <cstddef>
#include <iostream>
#include <ostream>
class Node
{
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
    Node() : data(0), next(NULL) {};
};

class LinkList
{
public:
    Node* head;
    LinkList();
    ~LinkList();
    void insertasc(int val);
    void insert(int val);
    static LinkList merge(const LinkList& list1, const LinkList& list2);
    static LinkList reverse(const LinkList& list);
    friend std::ostream& operator<<(std::ostream& os, const LinkList& list);
};