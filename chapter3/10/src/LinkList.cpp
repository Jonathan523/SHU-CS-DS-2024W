// LinkList.cpp
#include "LinkList.hpp"
#include <cstddef>
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

void LinkList::insert(int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

LinkList LinkList::merge_and_reverse(const LinkList& list1,
                                     const LinkList& list2)
{
    LinkList mergedAndReversedList;
    Node* current1 = list1.head;
    Node* current2 = list2.head;

    while (current1 != NULL || current2 != NULL) {
        if (current1 != NULL && current2 != NULL) {
            if (current1->data == current2->data) {
                mergedAndReversedList.insert(current1->data);
                mergedAndReversedList.insert(current2->data);
                current1 = current1->next;
                current2 = current2->next;
            } else if (current1->data < current2->data) {
                mergedAndReversedList.insert(current1->data);
                current1 = current1->next;
            } else {
                mergedAndReversedList.insert(current2->data);
                current2 = current2->next;
            }
        } else if (current1 == NULL) {
            while (current2 != NULL) {
                mergedAndReversedList.insert(current2->data);
                current2 = current2->next;
            }
        } else {
            while (current1 != NULL) {
                mergedAndReversedList.insert(current1->data);
                current1 = current1->next;
            }
        }
    }

    return mergedAndReversedList;
}

std::ostream& operator<<(std::ostream& os, const LinkList& list)
{
    Node* current = list.head;
    while (current != NULL) {
        os << current->data << "->";
        current = current->next;
    }
    os << "NULL" << '\n';
    return os;
}