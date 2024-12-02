#include "SeqQueue.hpp"

bool SeqQueue::IsEmpty() { return length == 0; }

bool SeqQueue::IsFull() { return length == maxSize; }

void SeqQueue::EnQueue(const int e)  // 入队
{
    if (IsFull()) {
        std::cout << "The queue is full!" << '\n';
    } else {
        elems[(front + length) % maxSize] = e;
        length++;
        std::cout << "The element " << e << " has entered the queue" << '\n';
    }
}

void SeqQueue::DelQueue(int& e)  // 出队
{
    if (IsEmpty()) {
        std::cout << "The queue is empty!" << '\n';
    } else {
        e = elems[front];
        front = (front + 1) % maxSize;
        length--;
        std::cout << "The element " << e << " has been deleted!" << '\n';
    }
}

void SeqQueue::Show()
{
    if (IsEmpty()) {
        std::cout << "The queue is empty!" << '\n';
        return;
    }
    for (int i = 0; i < length; i++) {
        std::cout << elems[(front + i) % maxSize] << '\t';
    }
    std::cout << '\n';
}
