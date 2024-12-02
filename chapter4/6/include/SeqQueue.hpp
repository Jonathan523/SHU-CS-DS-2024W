#include <iostream>

class SeqQueue
{
protected:
    int front;
    int length;
    int maxSize;
    int* elems;

public:
    SeqQueue() : front(0), length(0), maxSize(0) { elems = NULL; }
    SeqQueue(int max) : front(0), length(0), maxSize(max)
    {
        elems = new int[maxSize];
    }
    ~SeqQueue()
    {
        delete[] elems;
        length = 0;
        maxSize = 0;
    }
    bool IsEmpty();             // 判断队空
    bool IsFull();              // 判断队满
    void EnQueue(const int e);  // 入队
    void DelQueue(int& e);      // 出队
    void Show();
};