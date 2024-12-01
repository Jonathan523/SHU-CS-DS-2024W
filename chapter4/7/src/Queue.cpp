#include "Queue.hpp"
#include <iostream>

Queue::Queue(int maxSize)
    : maxSize(maxSize), frontIndex(0), rearIndex(0), size(0)
{
    data = new int[maxSize];
}

Queue::~Queue() { delete[] data; }

bool Queue::isEmpty() const { return size == 0; }

bool Queue::isFull() const { return size == maxSize; }

void Queue::push(int value)
{
    if (isFull()) {
        std::cerr << "队列已满，无法插入元素！" << '\n';
        return;
    }
    data[rearIndex] = value;
    rearIndex = (rearIndex + 1) % maxSize;
    ++size;
}

void Queue::pop()
{
    if (isEmpty()) {
        std::cerr << "队列为空，无法删除元素！" << '\n';
        return;
    }
    frontIndex = (frontIndex + 1) % maxSize;
    --size;
}

int Queue::front() const
{
    if (isEmpty()) {
        std::cerr << "队列为空，无队头元素！" << '\n';
        return int();
    }
    return data[frontIndex];
}

void Queue::print() const
{
    std::cout << "\nQueue: ";
    if (isEmpty()) {
        std::cerr << "队列为空！" << '\n';
        return;
    }
    int index = frontIndex;
    for (int i = 0; i < size; ++i) {
        std::cout << data[index] << " ";
        index = (index + 1) % maxSize;
    }
    std::cout << '\n';
}