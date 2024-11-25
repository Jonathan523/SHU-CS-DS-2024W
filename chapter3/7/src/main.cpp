#include "Polynomial.hpp"
#include <iostream>
int main()
{
    Polynomial poly;
    int num = 0, flag = 0;
    std::cout << "请输入多项式（系数，指数）——(如系数输入为0则退出)：";
    while (true) {
        double m = 0, n = 0;
        std::cin >> m;
        if (m == 0) {
            break;
        };
        std::cin >> n;
        if (0 < n && n < 1) {
            flag = 1;
        } else if (n <= -1) {
            flag = 2;
        } else if (-1 < n && n < 0) {
            flag = 3;
        }
        poly.add(m, n);
        num++;
    }
    poly.show(num);
    std::cout << '\n';
    double x = 0.0;
    std::cout << "please input the 'x':" << '\n';
    std::cin >> x;
    if ((flag == 1 && x < 0) || (flag == 2 && x == 0) ||
        (flag == 3 && x <= 0)) {
        std::cout << "Invalid input value" << '\n';
    } else {
        std::cout << "The value of the polynomial at x = " << x << " is "
                  << poly.calc(x) << '\n';
    }
    return 0;
}