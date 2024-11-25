#include "Polynomial.hpp"
#include <iostream>
using namespace std;

int main()
{
    Polynomial poly;
    int num = 0, flag = 0;
    cout << "请输入多项式（系数，指数）——(如系数输入为0则退出)：";
    while (true) {
        double m = 0, n = 0;
        cin >> m;
        if (m == 0)
            break;
        cin >> n;
        if (0 < n && n < 1)
            flag = 1;
        else if (n <= -1)
            flag = 2;
        else if (-1 < n && n < 0)
            flag = 3;
        poly.add(m, n);
        num++;
    }
    poly.show(num);
    cout << endl;
    double x = 0.0;
    cout << "please input the 'x':" << endl;
    cin >> x;
    if ((flag == 1 && x < 0) || (flag == 2 && x == 0) || (flag == 3 && x <= 0))
        cout << "Invalid input value" << endl;
    else
        cout << "The value of the polynomial at x = " << x << " is "
             << poly.calc(x) << endl;
    return 0;
}