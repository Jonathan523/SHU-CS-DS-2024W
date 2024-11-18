// LinkList.cpp
#include "LinkList.hpp"
#include <iostream>

LinkList::LinkList() : head(nullptr) {}

LinkList::~LinkList()
{
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkList::insertasc(int val)
{
    Node* newNode = new Node(val);
    if (head == nullptr || head->data >= val) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr && current->next->data < val) {
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
    while (current != nullptr) {
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

    while ((current1 != nullptr) && (current2 != nullptr)) {
        if (current1->data <= current2->data) {
            mergedList.insertasc(current1->data);
            current1 = current1->next;
        } else {
            mergedList.insertasc(current2->data);
            current2 = current2->next;
        }
    }

    while (current1 != nullptr) {
        mergedList.insertasc(current1->data);
        current1 = current1->next;
    }

    while (current2 != nullptr) {
        mergedList.insertasc(current2->data);
        current2 = current2->next;
    }

    return mergedList;
}

void LinkList::reverse()
{
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}