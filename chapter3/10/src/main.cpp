// main.cpp
#include "LinkList.hpp"
#include <iostream>

int main()
{
    LinkList list1;

    list1.insertasc(7);
    list1.insertasc(5);
    list1.insertasc(3);
    list1.insertasc(1);
    LinkList list2;
    list2.insertasc(2);
    list2.insertasc(4);
    list2.insertasc(6);
    list2.insertasc(8);

    std::cout << "List 1: " << list1;
    std::cout << "List 2: " << list2;

    LinkList mergedList = LinkList::merge(list1, list2);
    LinkList reversedList = LinkList::reverse(mergedList);

    std::cout << "Merged and reversed list: " << reversedList;

    return 0;
}