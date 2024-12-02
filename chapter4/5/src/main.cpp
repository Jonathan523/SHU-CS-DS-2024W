#include "Queue.hpp"
#include "Stack.hpp"
#include <iostream>

int main()
{
#ifdef DS_DEBUG
    std::cout << "请输入队列的最大长度:";
#endif
    int size;
    std::cin >> size;
    Queue test(size);
    while (true) {

#ifdef DS_DEBUG
        std::cout << "请选择操作:" << '\n';
        std::cout << "1.元素入队" << '\n';
        std::cout << "2.元素出队" << '\n';
        std::cout << "3.队列判空" << '\n';
        std::cout << "0.操作结束" << '\n';
#endif
        int key;
        bool flag = false;
        std::cin >> key;
        switch (key) {
        case 1: {
#ifdef DS_DEBUG
            std::cout << "请输入要入队的元素:";
#endif
            int data;
            std::cin >> data;
            test.push(data);
            break;
        }
        case 2: {
            try {
                std::cout << "弹出元素为:" << test.pop() << '\n';
            } catch (const std::out_of_range& e) {
                std::cout << "Range Error:" << e.what() << '\n';
            }
            break;
        }
        case 3: {
            if (test.IsEmpty() == true) {
                std::cout << "队列为空" << '\n';
            } else {
                std::cout << "队列非空" << '\n';
            }
            break;
        }
        default:
            flag = true;
        }
        if (flag == true) {
            break;
        }
    }

    return 0;
}