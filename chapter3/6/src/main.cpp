#include "LinkList.hpp"
#include <iostream>
using namespace std;

int main()
{
    int e;
    LinkList Link;
    Link.append(1);
    Link.append(3);
    Link.append(6);
    Link.append(7);
    Link.append(8);
    Link.append(11);

    cout << "LinkList: " << endl;
    Link.ShowLinkList();
    cout << '\n';

    cout << "Please input the element you want to insert : ";
    cin >> e;
    Link.Insert(e);
    cout << "LinkList: " << endl;
    Link.ShowLinkList();
    cout << '\n';

    cout << "Please input the element you want to delete : ";
    cin >> e;
    Link.Delete(e);
}