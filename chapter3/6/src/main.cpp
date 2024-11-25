#include "LinkList.hpp"
#include <iostream>
using namespace std;

int main()
{
    int e, n;
    LinkList Link;

#ifdef DS_DEBUG
    cout << "输入元素数量：";
#endif
    cin >> n;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        Link.append(k);
    }

    cout << "LinkList: " << endl;
    Link.ShowLinkList();
    cout << '\n';
#ifdef DS_DEBUG
    cout << "Please input the element you want to insert : ";
#endif
    cin >> e;
    Link.Insert(e);
    cout << "LinkList: " << endl;
    Link.ShowLinkList();
    cout << '\n';
#ifdef DS_DEBUG
    cout << "Please input the element you want to delete : ";
#endif
    cin >> e;
    Link.Delete(e);
}