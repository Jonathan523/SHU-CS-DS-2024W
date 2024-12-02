#include "stack.hpp"
#include <iostream>

int main()
{
    int maxsize;
#ifdef DS_DEBUG
    std::cout << "Please enter the maximum size of the stack: ";
#endif
    std::cin >> maxsize;
    while (maxsize <= 0) {
        std::cout << "Invalid input, Please try again: ";
        std::cin >> maxsize;
    }
    Stack sqe_stack(maxsize);
#ifdef DS_DEBUG
    std::cout << "Please input the value of stack1 (end with Enter): ";
#endif
    std::cin.ignore();
    char c;
    while ((std::cin.get(c) != 0) && c != '\n') {
        if (isdigit(c) != 0) {
            sqe_stack.push1(c - '0');
        }
    }
#ifdef DS_DEBUG
    std::cout << "Please input the value of stack2 (end with Enter): ";
#endif
    while ((std::cin.get(c) != 0) && c != '\n') {
        if (isdigit(c) != 0) {
            sqe_stack.push2(c - '0');
        }
    }

    char choose;
#ifdef DS_DEBUG
    std::cout << "If you want to pop the value from stack1 - y/n: ";
#endif
    std::cin >> choose;
    if (choose == 'y' || choose == 'Y') {
        int k;
#ifdef DS_DEBUG
        std::cout << "How much? ";
#endif
        std::cin >> k;
        if (k >= 0) {
            while ((k--) != 0) {
                sqe_stack.pop1();
            }
        } else {
            std::cout << "Invalid input" << '\n';
        }
        std::cout << '\n';
    }

#ifdef DS_DEBUG
    std::cout << "If you want to pop the value from stack2 - y/n: ";
#endif
    std::cin >> choose;
    if (choose == 'y' || choose == 'Y') {
        int k;
#ifdef DS_DEBUG
        std::cout << "How much? ";
#endif
        std::cin >> k;
        if (k >= 0) {
            while ((k--) != 0) {
                sqe_stack.pop2();
            }
        } else {
            std::cout << "Invalid input" << '\n';
        }
        std::cout << '\n';
    }

#ifdef DS_DEBUG
    std::cout << "If you want to check if the stack is empty - y/n: ";
#endif
    std::cin >> choose;
    if (choose == 'y' || choose == 'Y') {
        std::cout << "Stack1 is "
                  << (sqe_stack.isEmpty1() ? "EMPTY" : "NOT EMPTY") << '\n';
        std::cout << "Stack2 is "
                  << (sqe_stack.isEmpty2() ? "EMPTY" : "NOT EMPTY") << '\n';
    }

    return 0;
}