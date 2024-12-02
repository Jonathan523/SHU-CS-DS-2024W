#pragma once
class Queue
{
private:
    int* data;       // 队列存储空间
    int maxSize;     // 队列最大容量
    int frontIndex;  // 队头索引
    int rearIndex;   // 队尾索引
    int size;        // 队列当前大小

public:
    Queue(int maxSize);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    void push(int value);
    void pop();
    int front() const;
    void print() const;
};
