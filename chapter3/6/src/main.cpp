#include "LinkList.hpp"
#include <iostream>
using namespace std;

int main()
{
      int e,n;
    LinkList Link;


    cout<<"输入元素数量：";
    cin>>n;
    int k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        Link.append(k);
    }

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