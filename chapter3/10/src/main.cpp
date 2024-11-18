// main.cpp
#include "LinkList.hpp"
#include <iostream>

int main()
{
    LinkList list1;
    list1.insertasc(1);
    list1.insertasc(3);
    list1.insertasc(5);
    list1.insertasc(7);

    LinkList list2;
    list2.insertasc(2);
    list2.insertasc(4);
    list2.insertasc(6);
    list2.insertasc(8);

    std::cout << "List 1: ";
    list1.display();

    std::cout << "List 2: ";
    list2.display();

    LinkList mergedList = LinkList::mergeLists(list1, list2);
    mergedList.reverse();

    std::cout << "Merged and reversed list: ";
    mergedList.display();

    return 0;
}