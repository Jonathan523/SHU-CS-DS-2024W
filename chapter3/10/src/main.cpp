// main.cpp
#include "LinkList.hpp"
#include <iostream>
#include <ostream>

int main()
{

    LinkList list1;
    LinkList list2;
#ifdef DS_DEBUG
    std::cout << "请输入list1元素数量:";
    int n;
    std::cin >> n;
    if (n > 0) {
        std::cout << "请输入list1元素:";
        for (int i = 0; i < n; i++) {
            int val;
            std::cin >> val;
            list1.insertasc(val);
        }
    }

    std::cout << "请输入list2元素数量:";
    std::cin >> n;
    std::cout << "请输入list2元素:";
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            int val;
            std::cin >> val;
            list2.insertasc(val);
        }
    }
#endif

    std::cout << "List 1: " << list1;
    std::cout << "List 2: " << list2;

    LinkList mergedAndReversedList = LinkList::merge_and_reverse(list1, list2);

    std::cout << "Merged and reversed list: " << mergedAndReversedList;

    return 0;
}