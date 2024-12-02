#include "Queue.hpp"
#include <iostream>

int main()
{
    int n;
#ifdef DS_DEBUG
    std::cout << "输入杨辉三角的行数: ";
#endif
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "行数必须为正整数！" << '\n';
        return 1;
    } else if (n >= 34) {
        std::cerr << "行数太大！" << '\n';
        return 1;
    }

    Queue q(n + 1);
    q.push(1);

    for (int i = 1; i <= n; ++i) {
        int prev = 0;
        for (int j = 0; j < i; ++j) {
            int curr = q.front();
            q.pop();
            std::cout << curr << " ";
            q.push(prev + curr);
            prev = curr;
        }
        q.push(1);
        std::cout << '\n';
    }
    return 0;
}