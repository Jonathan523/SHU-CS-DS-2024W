// LinkList.hpp
#pragma once

#include <cstddef>
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
    void insertdesc(int val);
    void display() const;
    static LinkList mergeLists(const LinkList& list1, const LinkList& list2);
    void reverse();
};