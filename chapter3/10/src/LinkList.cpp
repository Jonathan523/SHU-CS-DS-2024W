// LinkList.cpp
#include "LinkList.hpp"
#include <iostream>

LinkList::LinkList() : head(NULL) {}

LinkList::~LinkList()
{
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkList::insertasc(int val)
{
    Node* newNode = new Node(val);
    if (head == NULL || head->data >= val) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != NULL && current->next->data < val) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void LinkList::insertdesc(int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void LinkList::display() const
{
    Node* current = head;
    while (current != NULL) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << '\n';
}

LinkList LinkList::mergeLists(const LinkList& list1, const LinkList& list2)
{
    LinkList mergedList;
    Node* current1 = list1.head;
    Node* current2 = list2.head;

    while ((current1 != NULL) && (current2 != NULL)) {
        if (current1->data <= current2->data) {
            mergedList.insertasc(current1->data);
            current1 = current1->next;
        } else {
            mergedList.insertasc(current2->data);
            current2 = current2->next;
        }
    }

    while (current1 != NULL) {
        mergedList.insertasc(current1->data);
        current1 = current1->next;
    }

    while (current2 != NULL) {
        mergedList.insertasc(current2->data);
        current2 = current2->next;
    }

    return mergedList;
}

void LinkList::reverse()
{
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}