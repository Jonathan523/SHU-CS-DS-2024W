// LinkList.cpp

#include "LinkList.hpp"

LinkList::LinkList() : head(new Node(0)) {};

LinkList::~LinkList()
{
    while (head) {
        Node* p = head;
        head = head->next;
        delete p;
    }
}

void LinkList::append(int value)  // 插入节点到链表尾部
{
    Node* newNode = new Node(value);
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = newNode;
}

void LinkList::Insert(int e)  // 将元素e插入有序链表中
{
    Node* p = new Node(e);
    Node* q = head;
    
    while (p->data > q->next->data) {
        q = q->next;
        if (q->next == NULL)
            break;
    }
    p->next = q->next;
    q->next = p;
}

void LinkList::Delete(int e)  // 删除数据元素等于e的所有结点
{
    bool flag = false;
    Node* p = head;
    while (p->next != NULL && p->next->data < e)
        p = p->next;
    while (p->next != NULL && e == p->next->data) {
        p->next = p->next->next;
        flag = true;
        if(p->next->data>e) break;
    }

    if (flag == false) {
        cout << "!!!!!!!!!!There has no " << e << endl;
        cout << "LinkList: " << endl;
        ShowLinkList();
    } else if (flag == true) {
        cout << e << " has been deleted" << endl;
        cout << "LinkList: " << endl;
        ShowLinkList();
    }
}

void LinkList::ShowLinkList()
{
    Node* p = head->next;
    while (p) {
        cout << p->data << '\t';
        p = p->next;
    }
}
