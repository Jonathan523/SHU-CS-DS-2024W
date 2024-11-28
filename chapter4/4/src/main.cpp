#include <iostream>
#include "stack.hpp"

int main() {
    int maxsize;
    std::cout << "Please enter the maximum size of the stack: ";
    std::cin >> maxsize;
    Stack sqe_stack(maxsize);

    std::cout << "Please input the value of stack1 (end with Enter):\n";
    std::cin.ignore(); // ����֮ǰ����Ļ��з�
    char c;
    while (std::cin.get(c) && c != '\n') {
        if (isdigit(c)) {
            sqe_stack.push1(c - '0');
        }
    }

    std::cout << "Please input the value of stack2 (end with Enter):\n";
    while (std::cin.get(c) && c != '\n') {
        if (isdigit(c)) {
            sqe_stack.push2(c - '0'); 
        }
    }

    char choose;
    std::cout << "If you want to pop the value from stack1 - y/n: ";
    std::cin >> choose;
    if (choose == 'y' || choose == 'Y') {
        int k;
        std::cout << "How much? ";
        std::cin >> k;
        while(k--)
        sqe_stack.pop1();
    }

    std::cout << "If you want to pop the value from stack2 - y/n: ";
    std::cin >> choose;
    if (choose == 'y' || choose == 'Y') {
        int k;
        std::cout << "How much? ";
        std::cin >> k;
        while (k--)
            sqe_stack.pop2();
    }

    std::cout << "If you want to check if the stack is empty - y/n: ";
    std::cin >> choose;
    if (choose == 'y' || choose == 'Y') {
        std::cout << "Stack1 is empty: " << std::boolalpha << sqe_stack.isEmpty1() << std::endl;
        std::cout << "Stack2 is empty: " << std::boolalpha << sqe_stack.isEmpty2() << std::endl;
    }

    return 0;
}