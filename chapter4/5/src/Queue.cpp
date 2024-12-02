
#include "Queue.hpp"
#include <iostream>
Queue::Queue(const int& size) : EntryStack(size), ExitStack(size), MaxSize(size)
{
}

Queue::~Queue() {}

void Queue::push(int a)
{
    if (EntryStack.top < MaxSize - 1) {
        EntryStack.push(a);
    } else {
        std::cout << "队列已满，入队失败" << '\n';
    }
}

int Queue::pop()
{
    if (!ExitStack.IsEmpty()) {
        return ExitStack.pop();
    } else if (EntryStack.IsEmpty()) {
        throw std::out_of_range("队列已空，出队失败");
    } else {
        while (!EntryStack.IsEmpty()) {
            ExitStack.push(EntryStack.pop());
        }
        return ExitStack.pop();
    }
}

bool Queue::IsEmpty() { return EntryStack.IsEmpty() && ExitStack.IsEmpty(); }
