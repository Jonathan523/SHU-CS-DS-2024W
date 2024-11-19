// LinkList.hpp
#pragma once
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

public:
    Node(int e) : data(e), next(NULL) {};
};

class LinkList
{
private:
    Node* head;

public:
    LinkList();
    ~LinkList();
    void append(int value);  // 插入节点到链表尾部
    void Insert(int e);     // 将元素e插入有序链表中
    void Delete(int e);      // 删除数据元素等于e的结点
    void ShowLinkList();
};