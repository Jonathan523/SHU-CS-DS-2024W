#include "LinkList.hpp"
#include <iostream>

int main()
{
    int e, n;
    LinkList Link;

#ifdef DS_DEBUG
    std::cout << "输入元素数量：";
#endif
    std::cin >> n;
    int k;
    for (int i = 0; i < n; i++) {
        std::cin >> k;
        Link.append(k);
    }

    std::cout << "LinkList: " << '\n';
    Link.ShowLinkList();
    std::cout << '\n';
#ifdef DS_DEBUG
    std::cout << "Please input the element you want to insert : ";
#endif
    std::cin >> e;
    Link.Insert(e);
    std::cout << "LinkList: " << '\n';
    Link.ShowLinkList();
    std::cout << '\n';
#ifdef DS_DEBUG
    std::cout << "Please input the element you want to delete : ";
#endif
    std::cin >> e;
    Link.Delete(e);
}