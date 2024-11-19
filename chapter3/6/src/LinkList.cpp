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
    Node* q = head->next;
    while (p->data > q->next->data )
    {
        q = q->next;
        if(q->next==NULL) break;
    }
    if (q->next == NULL)
        append(e);
    else {
        Node* temp = q->next;
        q->next = p;
        p->next = temp;
    }
}

void LinkList::Delete(int e)  // 删除数据元素等于e的结点
{
    Node* p = head->next;
    while (e != p->next->data )
    {
        p = p->next;
        if(p->next==NULL) break;
    }
    if (p->next == NULL) {
        cout << "!!!!!!!!!!There has no " << e << endl;
        cout << "LinkList: " << endl;
        ShowLinkList();
    } else {
        p->next = p->next->next;
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
